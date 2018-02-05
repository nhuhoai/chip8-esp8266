/**
 *  @file     test_init.cpp
 *  @version  0.1
 *  @date     2018-02-02
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Init test
 */

#ifdef UNIT_TEST

#include <Arduino.h>
#include <unity.h>
#include "test_helpers.h"

void test_cpu_init(void) {
  CpuTest test;
  unsigned short i;
  test.init();

  TEST_ASSERT_EQUAL(test.getPc(), CpuTest::MEMORY_START);
  TEST_ASSERT_EQUAL(test.getOpcode(), 0);
  TEST_ASSERT_EQUAL(test.getI(), 0);
  TEST_ASSERT_EQUAL(test.getSp(), 0);
  TEST_ASSERT_EQUAL(test.getDelay(), 0);
  for(i = 0; i < Chip8Gfx::FONTSET_SIZE; i++) {
    TEST_ASSERT_EQUAL(test.getMemory(i), Chip8Gfx::FONTSET[i]);
  }
  for(i = Chip8Gfx::FONTSET_SIZE; i < CpuTest::MEMORY_SIZE; i++) {
    TEST_ASSERT_EQUAL(test.getMemory(i), 0);
  }
  for(i = 0; i < CpuTest::V_SIZE; i++) {
    TEST_ASSERT_EQUAL(test.getV(i), 0);
  }
  for(i = 0; i < CpuTest::STACK_SIZE; i++) {
    TEST_ASSERT_EQUAL(test.getStack(i), 0);
  }
}

void test_gfx_init(void) {
  GfxTest test;
  unsigned short i;
  test.init();
  TEST_ASSERT_EQUAL(test.getUpdateGfx(), false);
  for(i = 0; i < GfxTest::WIDTH * GfxTest::HEIGHT; i++) {
    TEST_ASSERT_EQUAL(test.getMatrix(i), false);
  }
}

void test_pad_init(void) {
  PadTest test;
  unsigned char i;
  test.init();
  for(i = 0; i < PadTest::PAD_SIZE; i++) {
    TEST_ASSERT_EQUAL(test.getPad(i), 0);
  }
}

void test_sound_init(void) {
  SoundTest test;
  test.init();
  TEST_ASSERT_EQUAL(test.getTimer(), 0);
}

#endif

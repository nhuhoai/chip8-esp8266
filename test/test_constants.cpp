/**
 *  @file     test_constants.cpp
 *  @version  0.1
 *  @date     2018-02-02
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Constants test
 */

#include <Arduino.h>
#include <unity.h>
#include "../src/cpu.h"

#ifdef UNIT_TEST

void test_cpu_constants(void) {
  TEST_ASSERT_EQUAL(CPU_SPEED, 60);
  TEST_ASSERT_EQUAL(CPU_MEM_SIZE, 4096);
  TEST_ASSERT_EQUAL(CPU_MEM_START, 0x200);
  TEST_ASSERT_EQUAL(CPU_V_SIZE, 16);
  TEST_ASSERT_EQUAL(CPU_STACK_SIZE, 16);
}

#endif

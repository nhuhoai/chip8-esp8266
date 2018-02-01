/**
 *  @file     test_main.cpp
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Unit test
 */

#include <Arduino.h>
#include <unity.h>

#ifdef UNIT_TEST

const unsigned char MAX_CYCLES = 5;
unsigned char cycle = 0;

void test_oneequalsone(void) {
  TEST_ASSERT_EQUAL(1, 1);
}

void test_istrue(void) {
  TEST_ASSERT_TRUE(true);
}

void test_isnull(void) {
  TEST_ASSERT_NULL(NULL);
}

void setup() {
  delay(2000);

  UNITY_BEGIN();

  RUN_TEST(test_oneequalsone);
}

void loop() {
  if(cycle < MAX_CYCLES) {
    RUN_TEST(test_istrue);
    delay(200);
    RUN_TEST(test_isnull);
    delay(200);
    cycle++;
  } else {
    UNITY_END();
  }
}

#endif

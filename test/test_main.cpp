/**
 *  @file     test_main.cpp
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Unit test
 */

#ifdef UNIT_TEST

#include <Arduino.h>
#include <unity.h>
#include "test_constants.h"

unsigned char cycle = 0;

void setup() {
  delay(2000);

  UNITY_BEGIN();
}

void loop() {
  switch(cycle) {
    case 0:
      UNITY_BEGIN();
      break;

    case 1:
      RUN_TEST(test_cpu_constants);
      break;

    case 1:
      RUN_TEST(test_gfx_constants);
      break;

    default:
      UNITY_END();
  }

  cycle++;
  delay(200);
}

#endif

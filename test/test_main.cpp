/**
 *  @file     test_main.cpp
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Unit test
 */

#ifdef UNIT_TEST

#include <Arduino.h>
#include <unity.h>
#include "test_constants.h"
#include "test_init.h"

unsigned char cycle = 0;

void setup() {
  delay(2000);
  cycle = 0;
  UNITY_BEGIN();
}

void loop() {
  switch(cycle) {
    case 0:
      test_cpu_constants();
      break;

    case 1:
      test_gfx_constants();
      break;

    case 2:
      test_pad_constants();
      break;

    default:
      UNITY_END();
  }

  cycle++;
  delay(200);
}

#endif

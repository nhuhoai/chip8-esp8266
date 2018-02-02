/**
 *  @file     main.cpp
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Main call file for Chip-8 emulator
 */

#include <Arduino.h>
#include "cpu.h"
#include "sound.h"
#include "gfx.h"
#include "pad.h"

#ifndef UNIT_TEST

void setup() {
    cpu_init();
    sound_init();
    gfx_init();
    pad_init();
}

void loop() {
    cpu_cycle();
    sound_cycle();
    gfx_cycle();
    pad_cycle();
}

#endif

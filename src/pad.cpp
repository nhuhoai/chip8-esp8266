/**
 *  @file     pad.cpp
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 pad
 */

#include "pad.h"

void Chip8Pad::init(void) {
  unsigned char i;
  for(i = 0; i < Chip8Pad::PAD_SIZE; i++) {
    this->pad[i] = false;
  }
}

void Chip8Pad::cycle(void) {
  // Detect keypad pressed
}

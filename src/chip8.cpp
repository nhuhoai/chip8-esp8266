/**
 *  @file     chip8.cpp
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 Object
 */

#include "chip8.h"

void Chip8::init(void) {
  this->status = 0;
}

void Chip8::cycle(void) {
  switch(this->status) {

    // Init CPU
    case 0:
      this->cpu.init();
      this->status = 1;
      break;

    // Init GFX
    case 1:
      this->gfx.init();
      this->status = 2;
      break;

    // Init pad
    case 2:
      this->pad.init();
      this->status = 3;
      break;

    // Init sound
    case 3:
      this->sound.init();
      break;
  }
}

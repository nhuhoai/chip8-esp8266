/**
 *  @file     cpu.cpp
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 CPU
 */

#include "cpu.h"
#include "gfx.h"

void Chip8Cpu::init(void) {
  unsigned short i;

  this->pc = Chip8Cpu::MEMORY_START;
  this->opcode = 0;
  this->i = 0;
  this->sp = 0;
  this->delay = 0;

  for(i = 0; i < Chip8Gfx::FONTSET_SIZE; i++) {
    this->memory[i] = Chip8Gfx::FONTSET[i];
  }
  for(i = Chip8Gfx::FONTSET_SIZE; i < Chip8Cpu::MEMORY_SIZE; i++) {
    this->memory[i] = 0;
  }

  for(i = 0; i < Chip8Cpu::V_SIZE; i++) {
    this->v[i] = 0;
  }

  for(i = 0; i < Chip8Cpu::STACK_SIZE; i++) {
    this->stack[i] = 0;
  }
}

void Chip8Cpu::cycle(void) {

}

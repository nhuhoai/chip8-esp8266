/**
 *  @file     cpu.cpp
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    CPU
 */

#include <Arduino.h>
#include "cpu.h"
#include "gfx.h"


//
//  Variables
//

/// Program counter
unsigned short cpu_pc;

/// Current opcode
unsigned short cpu_opc;

/// Memory
unsigned char cpu_mem[CPU_MEM_SIZE];

/// Registry V
unsigned char cpu_v[CPU_V_SIZE];

/// Registry index i
unsigned short cpu_i;

/// Stack
unsigned short cpu_stack[CPU_STACK_SIZE];

/// Stack pointer
unsigned short cpu_sp;

/// Delay timer
unsigned char cpu_delay;

/// CPU timer (for tick cycle)
unsigned long cpu_time = 0;

/// CPU cycle tick
bool cpu_tick = false;


//
//  Functions
//

void cpu_init(void) {
  unsigned char i;

  cpu_pc = CPU_MEM_START;
  cpu_opc = 0;
  cpu_i = 0;
  cpu_sp = 0;

  for(i = 0; i < GFX_FONTSET_SIZE; i++) {
    cpu_mem[i] = GFX_FONTSET[i];
  }
  for(i = GFX_FONTSET_SIZE; i < CPU_MEM_SIZE; i++) {
    cpu_mem[i] = 0;
  }

  for(i = 0; i < CPU_V_SIZE; i++) {
    cpu_v[i] = 0;
  }

  for(i = 0; i < CPU_STACK_SIZE; i++) {
    cpu_stack[i] = 0;
  }
}

void cpu_cycle(void) {
  if(cpu_time + (1000 / CPU_SPEED) < millis()) {

    if(cpu_delay > 0) {
      cpu_delay--;
    }

    cpu_tick = true;
    cpu_time = millis();
  } else {
    cpu_tick = false;
  }
}

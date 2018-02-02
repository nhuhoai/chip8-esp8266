/**
 *  @file     cpu.cpp
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    CPU
 */

#include <Arduino.h>
#include "cpu.h"


//
//  Constants & variables
//

/// Memory size
const unsigned short CPU_MEM_SIZE = 4096;

/// Start address in memory
const unsigned short CPU_MEM_START = 0x200;

/// Registry V size
const unsigned char CPU_V_SIZE = 16;

/// Stack size
const unsigned char CPU_STACK_SIZE = 16;

/// Program counter
unsigned char cpu_pc;

/// Current opcode
unsigned short cpu_opc;

/// Memory
unsigned char cpu_mem[CPU_MEM_SIZE];

/// Registry V
unsigned char cpu_v[CPU_V_SIZE];

/// Registry index i
unsigned short cpu_i;

/// Delay timer
unsigned char cpu_delay;

/// Stack
unsigned short cpu_stack[CPU_STACK_SIZE];

/// Stack pointer
unsigned short cpu_sp;

/// Using like a tick
unsigned long cpu_time;


//
//  Functions
//

void cpu_init(void) {

}

void cpu_cycle(void) {
  if(cpu_time + (1000 / CPU_SPEED) < millis()) {

  }
}

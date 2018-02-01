/**
 *  @file     cpu.h
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    CPU header
 */

//
//  Constants & variables
//

/// Memory size
const unsigned short CPU_MEM_SIZE = 4096;

/// Registry V size
const unsigned char CPU_V_SIZE = 16;

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

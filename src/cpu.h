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

 /// CPU Speed [Hz]
 const unsigned char CPU_SPEED = 60;

 /// Memory size
 const unsigned short CPU_MEM_SIZE = 4096;

 /// Start address in memory
 const unsigned short CPU_MEM_START = 0x200;

 /// Registry V size
 const unsigned char CPU_V_SIZE = 16;

 /// Stack size
 const unsigned char CPU_STACK_SIZE = 16;


 //
 //  Functions
 //

 /**
 *  Init CPU
 */
 void cpu_init(void);

 /**
 *  CPU life cycle
 */
 void cpu_cycle(void);

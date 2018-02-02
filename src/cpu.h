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

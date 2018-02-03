/**
 *  @file     sound.h
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Sound header
 */

//
//  Constants & variables
//

/// Sound timer
extern unsigned char sound_timer;


//
//  Functions
//

/**
*  Init CPU
*/
void sound_init(void);

/**
*  Sound cycle
*/
void sound_cycle(void);

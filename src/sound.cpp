/**
 *  @file     sound.cpp
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Sound
 */

#include <Arduino.h>
#include "sound.h"
#include "cpu.h"

//
//  Constants & variables
//

/// Sound timer
unsigned char sound_timer;


//
//  Functions
//


/**
 *  Init sound
 */
void sound_init(void) {
  sound_timer = 0;
}

/**
 *  Sound cycle
 */
void sound_cycle(void) {
  if(cpu_tick) {
    if(sound_timer == 1) {
      // TODO Make sound
    } else {
      // TODO Make no sound
    }
    sound_timer--;
  }
}

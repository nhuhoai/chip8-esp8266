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
unsigned char sound_delay;

/// Sound ticker
unsigned char sound_ticker;


//
//  Functions
//


/**
 *  Init sound
 */
void sound_init(void) {
  sound_delay = 0;
  sound_ticker = 0;
}

/**
 *  Sound cycle
 */
void sound_cycle(void) {
  if(sound_delay > 0) {
    if(sound_delay == 1) {
      // TODO Make sound
    }
    if(sound_ticker + (1000 / CPU_SPEED) < millis()) {
      sound_delay--;
        sound_ticker = millis();
    }
  }
}

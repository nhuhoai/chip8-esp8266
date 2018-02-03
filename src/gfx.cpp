/**
 *  @file     gfx.cpp
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    GFX
 */

#include "gfx.h"


//
//  Constants & variables
//

/// Screen matrix
bool gfx_matrix[GFX_WIDTH * GFX_HEIGHT];


//
//  Functions
//

void gfx_init(void) {
  unsigned char i;

  for(i = 0; i < GFX_WIDTH * GFX_HEIGHT; i++) {
    gfx_matrix[i] = 0;
  }
}

void gfx_cycle(void) {

}

/**
 *  @file     chip8.h
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 header
 */

#include "cpu.h"
#include "gfx.h"
#include "pad.h"
#include "sound.h"

class Chip8 {
  public:
    void init(void);
    void cycle(void);

  protected:
    Chip8Cpu cpu;
    Chip8Gfx gfx;
    Chip8Pad pad;
    Chip8Sound sound;

    unsigned char status;
};

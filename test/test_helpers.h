/**
 *  @file     test_helper.h
 *  @version  0.1
 *  @date     2018-02-02
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Add getters & setters for private fields and create a public version of private methods
 */

#ifdef UNIT_TEST

#include "../src/cpu.h"
#include "../src/gfx.h"
#include "../src/pad.h"
#include "../src/sound.h"

class CpuTest : public Chip8Cpu {
  public:
    unsigned char getMemory(unsigned short position) {
      return this->memory[position];
    }
    void setMemory(unsigned short position, unsigned char value) {
      this->memory[position] = value;
    }

    unsigned short getPc() {
      return this->pc;
    }
    void setPc(unsigned short value) {
      this->pc = value;
    }

    unsigned short getOpcode() {
      return this->opcode;
    }
    void setOpcode(unsigned short value) {
      this->opcode = value;
    }

    unsigned char getV(unsigned char position) {
      return this->v[position];
    }
    void setV(unsigned char position, unsigned char value) {
      this->v[position] = value;
    }

    unsigned short getI() {
      return this->i;
    }
    void setI(unsigned short value) {
      this->i = value;
    }

    unsigned short getStack(unsigned char position) {
      return this->stack[position];
    }
    void setStack(unsigned char position, unsigned short value) {
      this->stack[position] = value;
    }

    unsigned short getSp() {
      return this->sp;
    }
    void setSp(unsigned short value) {
      this->sp = value;
    }

    unsigned char getDelay() {
      return this->delay;
    }
    void setDelay(unsigned char value) {
      this->delay = value;
    }
};

class GfxTest : public Chip8Gfx {
  public:
    bool getUpdateGfx() {
      return this->updateGfx;
    }
    void setUpdateGfx(bool value) {
      this->updateGfx = value;
    }

    bool getMatrix(unsigned short position) {
      return this->matrix[position];
    }
    void setMatrix(unsigned short position, bool value) {
      this->matrix[position] = value;
    }
};

class PadTest : public Chip8Pad {
  public:
    bool getPad(unsigned char position) {
      return this->pad[position];
    }
    void setPad(unsigned char position, bool value) {
      this->pad[position] = value;
    }
};

class SoundTest : public Chip8Sound {
  public:
    unsigned char getTimer() {
      return this->timer;
    }
    void setTimer(unsigned char value) {
      this->timer = timer;
    }
};

#endif

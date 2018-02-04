/**
 *  @file     sound.h
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 sound header
 */

class Chip8Sound {
  public:
    /**
     *  Init sound
     */
    void init(void);

    /**
     *  Sound life cycle
     */
    void cycle(void);

  protected:
    unsigned char timer;
};

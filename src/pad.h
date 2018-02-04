/**
 *  @file     pad.h
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 pad header
 */

class Chip8Pad {
  public:
    /// Pad size
    static const unsigned char PAD_SIZE = 16;

    /**
     *  Init pad
     */
    void init(void);

    /**
     *  Pad life cycle
     */
    void cycle(void);

  private:
    bool pad[Chip8Pad::PAD_SIZE];
};

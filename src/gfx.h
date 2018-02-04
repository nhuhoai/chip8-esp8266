/**
 *  @file     gfx.h
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 GFX header
 */

/**
 *  @class  Chip8Gfx
 */
class Chip8Gfx {
  public:
    /// Display width
    static const unsigned char WIDTH = 64;
    /// Display heifht
    static const unsigned char HEIGHT = 32;
    /// Fontset size
    static const unsigned char FONTSET_SIZE = 80;
    /// Fontset
    static const unsigned char FONTSET[Chip8Gfx::FONTSET_SIZE];

    /**
     *  Init GFX
     */
    void init(void);

    /**
     *  GFX life cycle
     */
    void cycle(void);

    /**
     *  Update the display
     *  @param  position (short)
     *  @param  value (bool)
     */
    void setGfx(unsigned short position, bool value);

  private:
    /// Require a display update
    bool updateGfx;
    /// Display matrix
    bool matrix[Chip8Gfx::WIDTH * Chip8Gfx::WIDTH];
};

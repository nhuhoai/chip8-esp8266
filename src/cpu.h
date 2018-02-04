/**
 *  @file     cpu.h
 *  @version  0.1
 *  @date     2018-02-03
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Chip-8 CPU header
 */

class Chip8Cpu {
  public:
    /// CPU Clock speed
    static const unsigned char SPEED = 60;
    /// Memory size
    static const unsigned short MEMORY_SIZE = 4096;
    /// Register size
    static const unsigned char V_SIZE = 16;
    /// Stack size
    static const unsigned char STACK_SIZE = 16;

    /**
     *  Init Cpu
     */
    void init(void);
    
    /**
     *  CPU life cycle
     */
    void cycle(void);

  private:
    /// Memory
    unsigned char memory[Chip8Cpu::MEMORY_SIZE];
    /// Program counter
    unsigned short pc;
    /// Current opcode
    unsigned short opcode;
    /// Register
    unsigned char v[Chip8Cpu::V_SIZE];
    /// Index register
    unsigned short i;
    /// Stack
    unsigned short stack[Chip8Cpu::STACK_SIZE];
    /// Stack pointer
    unsigned short sp;
};

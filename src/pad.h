/**
 *  @file     pad.h
 *  @version  0.1
 *  @date     2018-02-01
 *  @author   Nhu-Hoai Robert VO <nhuhoai.vo@nhuvo.ch>
 *  @brief    Pad header
 */

//
//  Constants & variables
//

/// Pad size (keys count)
const unsigned char PAD_SIZE = 16;

/// Pad status
bool pad_status[PAD_SIZE];


//
//  Functions
//

/**
 *  Init Pad
 */
void pad_init(void);

/**
 *  Pad cycle
 */
void pad_cycle(void);

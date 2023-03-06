#ifndef _BLINK_H
#define _BLINK_H
#include "pico/stdlib.h"
/**
 * @brief delink demo
 *
 * @param[ms] ms
 * @return none
 */
void demo_blink_hd(uint32_t blink_ms);

/**
 * @brief delay with software of blink demo
 *
 * @param[delay_value] value of delay, mcu clock more faster the time more less.
 * @return null
 */
void demo_blink_soft(uint32_t delay_value);
#endif // _BLINK_H
#ifndef _CLOCK_H
#define _CLOCK_H

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pll.h"
#include "hardware/clocks.h"
#include "hardware/structs/pll.h"
#include "hardware/structs/clocks.h"

/**
 * @brief get colck of adc
 *
 * @param[void] none
 * @return clock num
 */
uint rpp_get_adc_clock(void);

/**
 * @brief get colck of system
 *
 * @param[void] none
 * @return clock num
 */
uint rpp_get_sys_clock(void);

/**
 * @brief get colck of usb
 *
 * @param[void] none
 * @return clock num
 */
uint rpp_get_usb_clock(void);

/**
 * @brief get system clodk demo
 *
 * @param[void] none
 * @return none
 */
void demo_get_sys_closk(void);
#endif // _CLOCK_H
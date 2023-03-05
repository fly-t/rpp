#ifndef __RPP_GPIO_H
#define __RPP_GPIO_H
#include "pico/stdlib.h"
#include <stdio.h>

/**
* @brief init gpio, with PIN and Direction
*
* @param[gpio_pin] PIN num
* @param[gpio_dir] direction is GPIO_OUT or GPIO_IN
* @return none
*/
void rpp_gpio_init(uint gpio_pin, uint gpio_dir);

/**
* @brief make level toggle
*
* @param[gpio_pin] PIN num
* @return none
*/
void rpp_gpio_toggle(uint gpio_pin);

#endif // __RPP_GPIO_H
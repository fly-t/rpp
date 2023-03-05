#ifndef __RPP_GPIO_H
#define __RPP_GPIO_H
#include "pico/stdlib.h"
#include <stdio.h>

void rpp_gpio_init(uint gpio_pin, uint gpio_dir);

void rpp_gpio_toggle(uint gpio_pin);

#endif // __RPP_GPIO_H
#include "rpp_gpio.h"

void rpp_gpio_init(uint gpio_pin, uint gpio_dir)
{
    gpio_init(gpio_pin);
    gpio_set_dir(gpio_pin, gpio_dir);
}

void rpp_gpio_toggle(uint gpio_pin)
{
    gpio_xor_mask(1 << gpio_pin);
}
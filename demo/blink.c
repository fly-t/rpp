#include "blink.h"
#include "pico/stdlib.h"
#include "pin_map.h"
#include "rpp_gpio.h"
#include "pico/time.h"
#include "clock.h"

void demo_blink_hd(uint32_t blink_ms)
{
    sleep_ms(blink_ms);
    rpp_gpio_toggle(LED_PIN);
}

void demo_blink_soft(uint32_t delay_value)
{
    rpp_soft_delay(delay_value);
    rpp_gpio_toggle(LED_PIN);
}
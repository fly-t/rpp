#include "blink.h"
#include "pico/stdlib.h"
#include "pin_map.h"
#include "rpp_gpio.h"

void demo_blink(int ms){
    rpp_gpio_toggle(LED_PIN);
    sleep_ms(ms);
}

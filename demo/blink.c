#include "blink.h"


void demo_blink(int ms){
    rpp_gpio_init(LED_PIN, GPIO_OUT);
    while (1)
    {
        rpp_gpio_toggle(LED_PIN);
        sleep_ms(ms);
    }
    
}

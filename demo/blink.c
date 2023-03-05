#include "blink.h"

/**
* @brief delink demo 
*
* @param[in] none
* @return none
*/
void demo_blink(){
    rpp_gpio_init(LED_PIN, GPIO_OUT);
    while (1)
    {
        rpp_gpio_toggle(LED_PIN);
        sleep_ms(80);
    }
    
}

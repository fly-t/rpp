/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include "pico/stdlib.h"
#include "pin_map.h"
#include "rpp_gpio.h"

#include "blink.h"
#include "hello_48Mhz.h"


int main()
{
    stdio_init_all();
    // init the LED pin(25)
    rpp_gpio_init(LED_PIN, GPIO_OUT);

    while (true)
    {
        // setup blink time 90ms
        demo_blink(190);
        printf("blink demo!\n");
    }
    return 0;
}

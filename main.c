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
#include "clock.h"

int main()
{
    stdio_init_all();
    // init the LED pin(25)
    rpp_gpio_init(LED_PIN, GPIO_OUT);
    rpp_set_sys_133Mhz();
    while (true)
    {
        // show clock frequence
        demo_get_sys_closk();

        // software blink to checkout clock.
        uint64_t time_start = time_us_64();
        demo_blink_soft(0xfffff);
        uint64_t time_end = time_us_64();

        printf("%llu us\n", time_end - time_start);
    }
    return 0;
}

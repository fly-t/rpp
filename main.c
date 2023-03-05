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

int main()
{
    stdio_init_all();
    rpp_gpio_init(LED_PIN, GPIO_OUT);

    while (true)
    {
        // setup blink time 90ms
        demo_blink(90);
    }
}

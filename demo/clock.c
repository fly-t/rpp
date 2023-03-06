#include "clock.h"

uint rpp_get_adc_clock(void)
{
  uint f_clk_adc = frequency_count_khz(CLOCKS_FC0_SRC_VALUE_CLK_ADC);
  return f_clk_adc;
}
uint rpp_get_sys_clock(void)
{
  uint f_pll_sys = frequency_count_khz(CLOCKS_FC0_SRC_VALUE_PLL_SYS_CLKSRC_PRIMARY);
  return f_pll_sys;
}
uint rpp_get_usb_clock(void)
{
  uint f_pll_usb = frequency_count_khz(CLOCKS_FC0_SRC_VALUE_PLL_USB_CLKSRC_PRIMARY);
  return f_pll_usb;
}
void rpp_set_sys_133Mhz(void)
{
  // config usb colock to 48Mhz
  clock_configure(clk_sys,
                  CLOCKS_CLK_SYS_CTRL_SRC_VALUE_CLKSRC_CLK_SYS_AUX,
                  CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_CLKSRC_PLL_USB,
                  48 * MHZ,
                  48 * MHZ);

  // Turn off PLL sys for good measure
  pll_deinit(pll_sys);
  // config by vcocalc.py
  pll_init(pll_sys, 1, 1596 * MHZ, 6, 2);

  clock_configure(clk_sys,
                  CLOCKS_CLK_SYS_CTRL_SRC_VALUE_CLKSRC_CLK_SYS_AUX,
                  CLOCKS_CLK_SYS_CTRL_AUXSRC_VALUE_CLKSRC_PLL_SYS,
                  133 * MHZ,
                  133 * MHZ);

  // CLK peri is clocked from clk_sys so need to change clk_peri's freq
  clock_configure(clk_peri,
                  0,
                  CLOCKS_CLK_PERI_CTRL_AUXSRC_VALUE_CLK_SYS,
                  133 * MHZ,
                  133 * MHZ);

  stdio_init_all();
}

void rpp_soft_delay(uint32_t vue)
{
  volatile uint64_t test;
  for (uint32_t i = vue; i > 0; i--)
  {
    test = i;
  }
}

void demo_get_sys_closk(void)
{
  uint clock = rpp_get_sys_clock();
  printf("system clock is:%d\n", clock);
}

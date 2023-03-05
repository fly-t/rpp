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

void demo_get_sys_closk(void)
{
  uint clock = rpp_get_sys_clock();
  printf("system clock is:%d\n", clock);
}

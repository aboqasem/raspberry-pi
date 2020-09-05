#include <bcm2835.h>
#include "util.h"

int main() {
  // initiate the library
  if (!bcm2835_init()) return 1;

  // set function of PIN07 to output
  bcm2835_gpio_fsel(PIN07, BCM2835_GPIO_FSEL_OUTP);
  // set function of PIN16 to output
  bcm2835_gpio_fsel(PIN16, BCM2835_GPIO_FSEL_OUTP);

  // both LED mask
  uint32_t bl_mask = mask_multi(PIN07, PIN16);
  // both LED high
  uint32_t bl_high = mask_multi(PIN07, PIN16);
  // both LED low
  uint32_t bl_low = 0;

  for (int i = 0; i < 10; ++i) {
    bcm2835_gpio_write_mask(bl_high, bl_mask);
    bcm2835_delay(50);
    bcm2835_gpio_write_mask(bl_low, bl_mask);
    bcm2835_delay(50);
  }

  // destroy the library
  return !bcm2835_close();
}
#include <bcm2835.h>
#include "util.h"

int main() {
  // initialise the library
  if (!bcm2835_init()) return 1;

  // set function of PIN07 to output
  bcm2835_gpio_fsel(PIN07, BCM2835_GPIO_FSEL_OUTP);
  // set function of PIN16 to output
  bcm2835_gpio_fsel(PIN16, BCM2835_GPIO_FSEL_OUTP);

  // both PINs mask
  uint32_t pn_mask = mask_multi(PIN07, PIN16);
  // both PINs high
  uint32_t pn_high = mask_multi(PIN07, PIN16);
  // both PINs low
  uint32_t pn_low = 0;

  for (int i = 0; i < 50; ++i) {
    bcm2835_gpio_write_mask(pn_high, pn_mask);
    bcm2835_delay(50);
    bcm2835_gpio_write_mask(pn_low, pn_mask);
    bcm2835_delay(50);
  }

  // close the library
  return !bcm2835_close();
}

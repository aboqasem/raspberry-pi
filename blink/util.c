//
// Created by Mohammad Al Zouabi on 05/09/2020.
//

#include "util.h"

/**
 * masks one given pin using left logical shifting
 * @param pin
 * @return mask of pin1
 */
uint32_t mask(uint8_t pin) {
  return (1U << pin);
}

/**
 * masks two given pins
 * @param pin1
 * @param pin2
 * @return mask of pin1 and pin2 using left logical shifting and OR gate
 */
uint32_t mask_multi(uint8_t pin1, uint8_t pin2) {
  return ((1U << pin1) | (1U << pin2));
}

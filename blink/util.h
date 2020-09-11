//
// Created by Mohammad Al Zouabi on 05/09/2020.
//

#pragma once

#include <stdint.h>
#include "lib/bcm2835.h"

#define PIN07 RPI_BPLUS_GPIO_J8_07
#define PIN16 RPI_BPLUS_GPIO_J8_16

/**
 * masks one given pin
 * @param pin
 * @return mask
 */
uint32_t mask(uint8_t pin);

/**
 * masks two given pins
 * @param pin1
 * @param pin2
 * @return mask
 */
uint32_t mask_multi(uint8_t pin1, uint8_t pin2);
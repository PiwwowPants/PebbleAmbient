#pragma once
  
#include <pebble.h>
  
static const uint8_t PLANET_COLORS[] = {
  GColorWhiteARGB8,
  GColorOrangeARGB8,
  GColorBlueMoonARGB8,
  GColorRedARGB8,
  GColorChromeYellowARGB8,
  GColorLightGrayARGB8,
  GColorJaegerGreenARGB8,
  GColorIndigoARGB8
};

static const uint8_t PLANET_SIZES[] = {
  2,
  3,
  3,
  2,
  5,
  5,
  4,
  4
};

static const int N_PLANETS = 8;

void calculate_planet_time(time_t now);
int32_t get_planet_angle(int index);
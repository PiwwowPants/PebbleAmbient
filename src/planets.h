#pragma once
  
#include <pebble.h>
  
static const uint8_t PLANET_COLORS[] = {
  GColorPastelYellowARGB8,
  GColorIcterineARGB8,
  GColorCobaltBlueARGB8,
  GColorDarkCandyAppleRedARGB8,
  GColorWindsorTanARGB8,
  GColorPastelYellowARGB8,
  GColorLightGrayARGB8,
  GColorBlueMoonARGB8
};

static const int N_PLANETS = 8;

void calculate_planet_time(time_t now);
int32_t get_planet_angle(int index);
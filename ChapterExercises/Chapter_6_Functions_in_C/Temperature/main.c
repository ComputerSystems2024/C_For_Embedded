#include <inttypes.h>
#include <stdio.h>

float temperature(uint16_t reg);
int main() {
  uint16_t reg = 0b0011001000000000;

  float temp = (float)temperature(reg);
  printf("%.2f\n", temp);

  return 0;
}

float temperature(uint16_t reg) {
  float factor = 0.03125;  // multiplier
  // consider negative values
  return (((uint16_t)reg) >> 2) *
         factor;  // 0b0011001000000000 >> 2 = 0b0000110010000000;
}
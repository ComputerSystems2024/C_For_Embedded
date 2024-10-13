/**Hexagonal number
 * H = n(2n-1)
 * H = luku * ((2 * luku) - 1); ------------------------------------
 * N = given number
 * n = (1 + sqrt(8 N+1))/4
 * Here, H(n) = N 
 * => n * (2n – 1) = N 
 * => 2 * n * n – n – N = 0 
 * The positive root of this equation is: 
 * n = (1 + sqrt(8 N + 1)) / 4 
 */
#include <math.h>
#include <inttypes.h>
#include <stdio.h>

uint8_t hexago(uint32_t luku);
/*
int main() {
 
  uint32_t N = 946;

  printf("N = %u\n", hexago(N));
}
 */

uint8_t hexago(uint32_t luku) {
  float control = 8 * luku+ 1;
  float positiveRoot = 1 + sqrt(control);
  float n = (positiveRoot) / 4; // value of n 
  if ((n - (int)n) == 0) {
    return 1;
  } else {
    return 0;
  }
}
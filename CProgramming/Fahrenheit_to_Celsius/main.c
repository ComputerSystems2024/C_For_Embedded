
/* Fahrenheit to Celsius converter */

#include <stdint.h>
#include <stdio.h>

int main() {
  double c1 = 5;
  double c2 = 9;
  double c3 = 32;
  double fah = 212.0;
  //float cent =( c1 / c2 ) * (fah - c3);
  double cent = ( c1 / c2 ) * (fah - c3);
  printf("%.2f Fahrenheit are %.2f Centigrades", fah, cent);

  //5/9 * (Fahrenheit - 32)

  return 0;
}

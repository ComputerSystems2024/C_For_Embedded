
/* C Variables */

#include <stdint.h>
#include <stdio.h>


int main() {
  uint8_t rgb = 255;
  int16_t value = -123;
  uint16_t unsignedInt = 3333;
  uint32_t longInteger = 0x1;
  float floatValue = 1.0e-6;

  printf("%d\n", value);
  printf("%d\n", unsignedInt);
  printf("%d\n", longInteger);
  printf("%f\n", floatValue);
  printf("rgb %d\n", rgb);

  // uint8_t arrayA[] = {1, 2, 3, 4, 5};
  uint8_t arrayB[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      //if (i % 3 == 0) {
        printf("%d\n", arrayB[i][j]);
     // }
      
    }
  }

  return 0;
}

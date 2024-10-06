/* Bit Operations */

#include <stdint.h>
#include <stdio.h>

int main() {
  printf("Bit operations \n");
  int8_t x = 5;  // variable x has a value of 5 (00000101)
  x = x << 1;    // shift one bit towardd MSB
                 // the value changed from 00000101 -> 00010100 = 1010
  printf("x>>1 : %d\n", x);

  int8_t y = 5;
  y = y << 2;  // 00000101 -> 00000101
  printf("y >> 2 : %d\n", y);

  int8_t z = 118;
  z = z << 1;  // 00000101 -> 00000101
  printf("z << 2 : %d\n", z);

  int8_t multiplyBy2 = 14;
  multiplyBy2 = multiplyBy2 << 1;
  printf("multiplyBy2 << 1 : %d\n", multiplyBy2);

  int8_t DivideBy2 = 14;
  DivideBy2 = DivideBy2 >> 1;
  printf("DivideBy2 >> 1 : %d\n", DivideBy2);

  //  lcd  ddddddddxxx >> 3 = 000dddddddd
  uint16_t lcd;
  printf("lcd >> 3 : %d\n", lcd);

  uint8_t not = 0b00001111;
  printf(" ~not : %d\n", ~ not);


  return 0;
}

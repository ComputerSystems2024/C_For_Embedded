
/* convert 16-bit register value into humidity-% */

#include <inttypes.h>
#include <math.h>
#include <stdio.h>

uint16_t isLCDEnabled();

int main() {
  // char a = 0b00001111;  // 0x0F;
  // char b = 0b10101010;

  // signed char resultOR = a | b;
  // printf("result %d\n", resultOR);

  // signed char resultAND = a & b;
  // printf("result %d\n", resultAND);

  // uint8_t moveLeft = 5;
  // moveLeft <<= 2;
  // printf("result %d\n", moveLeft);
  // moveLeft >>= 2;
  // printf("result %d\n", moveLeft);

  // uint8_t multiply = 5;
  // multiply <<= 2;
  // printf("multiply %d\n", multiply);

  // lcd bit masking read data ---------------------------
  /*
   printf("lcd bit masking ----------------\n");
   uint16_t lcd = 0x024F;   // 0000001001001111
   uint16_t MASK_E = 0x04;  // 0000000000000100

   printf("lcd 0x%x\n", lcd);
   printf("MASK_E 0x%x\n", MASK_E);

   // check if pin is enable ----------------- use AND and shift >>
   uint16_t enable = (lcd & MASK_E) >> 2;
   printf(" Enable 0x%x\n", enable);
   if (((lcd & MASK_E) >> 2) == 1) {
     printf(" is Enabled =  %d\n", enable);
   }
 */

  // lcd bit masking write data / set to 1 using OR ---------------------------
  printf("lcd_2 set bit to 1:\n");
  uint16_t lcd_2 = 0x024E;  // 0000001001001110
  uint16_t MASK_RS = 0x01;  // 0000000000000001
                            // 0000001001001111

  // lcd_2 = (lcd_2 | MASK_RS);
  lcd_2 |= MASK_RS;
  printf("lcd_2: 0x%x\n", lcd_2);  // 001001001111 / 0x24f  (12 digits)?

  // is lcd enabled ---------------------------
  printf("\n");
  isLCDEnabled();

  return 0;
}

// check if lcd is enabled - use (lcd & MASK_E) then shift right (>>)
uint16_t isLCDEnabled() {
  uint16_t lcd = 0x024F;   // 0000001001001111
  uint16_t MASK_E = 0x04;  // 0000000000000100

  uint16_t enable = (lcd & MASK_E) >> 2;

  printf("Enable 0x%x\n", enable);

  if (((lcd & MASK_E) >> 2) == 1) {
    printf("is Enabled = %d\n", enable);
  }
  return 1;
}
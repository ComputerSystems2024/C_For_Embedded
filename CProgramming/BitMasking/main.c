
/* C Variables */

#include <stdint.h>
#include <stdio.h>

#define MASK 0x22

int main() {
  uint8_t mask = 0x22;
  uint8_t mask2 = (1 << 5) | (1 << 1);

  printf("Mask %x\n", mask);
  printf("Mask %x\n", mask2);

  // control mask
  uint16_t MASK_E = 0b00000100;
  uint16_t MASK_RW = 0b00000010;
  uint16_t MASK_RS = 0b00000001;

  uint16_t control_mask = MASK_E | MASK_RW | MASK_RS;
  printf("control_mask %x\n", control_mask);

  //------------------
  printf("------------------- \n");
  printf("Bitwise operations (1.5p)\n\n ");
  uint8_t bit = 71;  
  printf("Bitwise Operation %d\n", 0x3a | 0x3b);
  

  return 0;
}
/*
 0b00000111
&0b01101110
 0b00000110 
-----------------
 00111010  
|00111011
 00111011
------------
10111100
00011110
00011100
-----------
 10111111
~01000000
 01000000(<< 1)
 10000000
 ----------
~0b00001011
 0b11110100
 -----------
 0b11101001
|0b00010001
 0b11111001
 -----------
~10011111
   
 01100000
^00010011
 01110011
-----------
 10001000

 01110111
^10010100
 11101011

-------------
~01010001

 10101110 
^10101011
 00000101
 ----------  
 0000:00001001 (8-bit)
 -101011001


*/
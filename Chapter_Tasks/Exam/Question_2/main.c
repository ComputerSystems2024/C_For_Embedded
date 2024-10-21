#include <inttypes.h>
#include <stdio.h>

//#define CLEAR(register, bit) register &= ~(1 << bit)


#define CLEAR(register, bit) ((register) &= ~(1 << (bit)))

#define CLEAR(register, bit) ((register) &= ~(1 << (bit))) //------------


int main() {

  //11111111

  uint8_t reg = 0xFF;  // Initial value: all bits set to 1
  CLEAR(reg, 3);       // Clear bit 3

  printf("reg %x\n", reg);

  

  return 0;
}


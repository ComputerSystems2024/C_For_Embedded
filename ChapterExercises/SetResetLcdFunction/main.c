
/**[1] Set, resset lcd
 * [2] write data to lcd
 *    -check if lcd is enambled
 *    -set R/W bit to 0 (Write mode = 0 / Read mode = 1)
 *    -Set the data bits in lce_register -> sent to the display
 *
 */

// #include <inttypes.h>
#include <stdint.h>
#include <stdio.h>

// Define LCD register and bit masks
const uint16_t RESET_BIT_MASK = 0x01;     // 0b0000000000000001
const uint16_t RW_BIT_MASK = 1 << 1;      // 0b0000000000000010
const uint16_t ENABLE_BIT_MASK = 1 << 2;  // 0b0000000000000100
const uint16_t DATA_MASK = 0x07F8;        // 0b0000011111111000

// simulated lcd register
uint16_t lcd_register = 0;

// Function declarations

uint16_t isLCDEnabled();
void writeDataToLCD(uint8_t data);
void resetLCD();

int main() {
  if (isLCDEnabled()) {
    writeDataToLCD(0xAA);  // 10101010  data to write
  } else {
    printf("LCD is not enabled!\n");
  }

  printf("\n");
  isLCDEnabled();

  return 0;
}

// check if lcd is enabled - use (lcd & MASK_E) then shift right (>>)
uint16_t isLCDEnabled() {
  uint16_t lcd = 0x024F;  // 0000001001001111

  uint16_t enable =
      (lcd & ENABLE_BIT_MASK) >> 2;  // lcd vs DATA_MAST ??????????

  printf("Enable 0x%x\n", enable);

  if (((lcd & ENABLE_BIT_MASK) >> 2) == 1) {
    // printf("is Enabled = %d\n", enable);
    return 1;
  } else {
    return 0;
  }
}

// write data to lcd
void writeDataToLCD(uint8_t data) {
  // Todo: check if lcd is enambled
  if (isLCDEnabled) {
  }
  printf(" data to LCD 0x%x\n", data);

  // Todo: Set the data bits in lcd_register -> sent to the display

  // Todo: set R/W bit to 0 (Write mode = 0 / Read mode = 1)
  //(lcd | mask)
  // DATA_MASK | RW_BIT_MASK)
}
// To reset the lcd
void resetLCD() {}
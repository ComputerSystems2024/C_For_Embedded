#include <inttypes.h>
#include <stdio.h>
//              8421
const uint16_t RESET_BIT_MASK = 0x01;     // 00000000 00000001
const uint16_t RW_BIT_MASK = 1 << 1;      // 00000000 00000010
const uint16_t ENABLE_BIT_MASK = 1 << 2;  // 00000000 00000100
const uint16_t DATA_MASK = 0x07F8;        // 00000111 11111000

// LCD register initial value
uint16_t lcd_register = 0x311A;  // 0011000100011010   data = 0011000100011  010

// Function to read data from the LCD
uint8_t readDataFromLCD() {
  printf("in read_data\n");

  lcd_register |= RW_BIT_MASK;  // set RW bit to 1 

  printf("lcd %x\n", lcd_register);
  uint8_t data = (lcd_register & DATA_MASK) >> 3;

  lcd_register =  lcd_register | RW_BIT_MASK;        //       00110001 00011 010 lcd_reg
                                                     // OR |  00000000 00000 010 RW_Mask
                                                     //       ----------------------------
                                                     //       00110001 00011 010 RW is enabled
                                                     
                                                     // data  00110001 00011 010 >> 3 00000110001 00011 = 0x623
  printf("lcd %x\n", lcd_register);
  printf("data %x\n", data);


  //uint8_t data2 = (lcd_register & DATA_MASK) >> 3;      //   00110001 00011 010 lcd_reg
  uint16_t test_data = (lcd_register & DATA_MASK) ;   // & 00000111 11111 000 data_mask
                                                          //   00110001 00011 010 >> 3  00000110001 00011
                                                          //   00000000 00100 011  results
                                                          
  printf("\ntest_data %x, data %x\n",test_data , data);           
 


  return data;
}

int main() {
  // 00000000|00000001  00000000|00000010 (1 << 1)

  readDataFromLCD();

  printf("RS %X\n", RESET_BIT_MASK);
  printf("RW %X\n", RW_BIT_MASK);
  printf("E %X\n", ENABLE_BIT_MASK);
  printf("data_Mask %X\n", DATA_MASK);
  return 0;
}
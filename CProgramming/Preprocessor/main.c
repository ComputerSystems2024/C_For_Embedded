
/* C Variables */

#include <inttypes.h>
#include <stdio.h>

#ifdef __AVR_ATmega128__
   #define BUTTON1_DOWN (!(PINA & (1 << PA0)))
   //
   #define BUTTON1_DOWN (!(PINB & (1 << PB2)))
 #endif

enum boolean { FALSE = 0, TRUE };
enum retro_computer { PET = 1, VIC20, C64, C128, AMIGA };

#define SQUARE(X) ((X) * (X))

int main() {
  enum boolean { FALSE = 0, TRUE };
  if (2 + 2 == 4) {
    printf("%d\n", TRUE);
  } else {
    printf("%d\n", FALSE);
  }

  enum retro_computer home_pc = C64;

  printf("Home_pc %d\n", home_pc);

  int results = SQUARE(4);
  printf("%d \n", results);

  return 0;
}

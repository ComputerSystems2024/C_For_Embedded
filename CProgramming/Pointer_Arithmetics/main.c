
/* C Variables */

#include <inttypes.h>
#include <stdio.h>

int main() {
  
  printf("****** print characters in a loop ***********\n");
  char string[] = "ABCD";
  char *stringPtr = string;
  // print each char
  for (stringPtr = string; *stringPtr != 0; stringPtr++) {
    printf("%c", *stringPtr);
  }
  printf("\n");

  // pointers do not care about the variable type
  /*
  uint16_t uArray[] = {0x1234, 0x5678, 0x9ABC};
  uint16_t *ptr = uArray;

  for(ptr = uArray; *ptr != 0; ptr++)
  {
    printf("%lx ", *ptr);
  }
  printf("\n");

*/
  uint16_t array[] = {0x1234, 0x5678, 0x9ABC};
  uint16_t *ptr = array;

  for (ptr = array; *ptr != 0; ptr++) {
    printf("%lx ", *ptr);
  }

  return 0;
}

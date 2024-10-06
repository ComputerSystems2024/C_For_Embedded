
/* C Variables */

#include <stdint.h>
#include <stdio.h>

int main() {
  uint8_t value = 54;

  printf("%d\n", value);
  uint8_t size = 5;
  uint8_t array[size];

  printf("Enter an integer\n");
  for (int i = 0; i < size; i++) {
    printf("element at %d :", i);
    scanf("%d", &array[i]);
  }

  printf("Print array\n");

  for (int i = 0; i < size; i++) {
    printf("%d \n", array[i]);
  }
  // printf("%d\n");

  printf("array size : %lu\n", sizeof(array));

  return 0;
}

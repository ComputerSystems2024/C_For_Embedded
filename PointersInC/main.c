
/* C Pointers */

// #include <stdint.h>
#include <inttypes.h>
#include <stdio.h>

void print_array(int *array, int size);

int main() {
  // int8_t x = 42;
  // int y = 42;

  // printf("sizeof x %d\n", sizeof(x));
  // printf("sizeof y %d \n", sizeof(y));

  // uint8_t a = 0x42;
  // uint8_t *addressOf_a = &a;

  // printf("value of a %x\n", a);
  // printf("address of a %x\n", a);
  // a = 0x56;

  // printf("ptrAddress %x\n", *addressOf_a);
  // *addressOf_a = 0x78;
  // printf("value of a %x\n", a);

  // // Operator &
  // printf("***************************\n");
  // int8_t n = 12;
  // printf("value of a is %d and address if %p\n", a, &a);
  // uint16_t xx = 0xBEEF;
  // uint16_t *addressOf_xx = &xx;

  // printf("x = %x\n", *addressOf_xx);

  printf("***************************\n");
  /*
  uint32_t a = 0x12345678;

  uint8_t *pointer_byte = &a;       // 8-bit pointer
  uint16_t *pointer_word = &a;      // 16-bit pointer
  uint32_t *pointer_longword = &a;  // 32-bit pointer

  printf("%x\n", *pointer_byte);
  printf("%lx\n", *pointer_word);
  printf("%lx\n", *pointer_longword);
*/
  printf("****** pass data to print_array ***********\n");
  int numbers[] = {10, 20, 30, 40, 50};
  printf("size of numbers %d\n", sizeof(numbers));

  int size = sizeof(numbers) / sizeof(numbers[0]);
  printf("size of one numbers %d\n", sizeof(numbers));

  printf("size_1\n");
  print_array(numbers, size);

  int size_2 = sizeof(numbers) / sizeof(numbers[0]);
  printf("size_2\n");
  print_array(numbers, size_2);

  
  return 0;
}
void print_array(int *array, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
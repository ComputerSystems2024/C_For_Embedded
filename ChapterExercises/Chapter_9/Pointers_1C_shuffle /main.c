#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

void shuffle(uint8_t *list, uint16_t list_size);
void swap(uint8_t *x, uint8_t *y);

/*
int main() {
  uint8_t deck[8] = {1, 2, 3, 4, 5, 6, 7, 8};

  printf("before suffling\n");
  for (int i = 0; i < 8; i++) {
    printf("%u ", deck[i]);
  }
  printf("\n");

  shuffle(deck, 8);
  printf("after suffling\n");

  for (int i = 0; i < 8; i++) {
    printf("deck[%u] %d\n", i, deck[i]);
  }
  printf("\n");

  return 0;
}
 
*/

void shuffle(uint8_t *list, uint16_t list_size) {
  srand(time(NULL));
  for (uint16_t i = list_size - 1; i > 0; i--) {
    uint16_t radn_index = rand() % i + 1;
    // uint8_t temp = list[i];

    swap(&list[i], &list[radn_index]);
  }
}
// swap values
void swap(uint8_t *x, uint8_t *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
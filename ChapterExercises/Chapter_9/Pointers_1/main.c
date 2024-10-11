
/* Shuffling the deck */
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>  // to get srand()
#include <time.h>

//#define ARRAYSIZE 8

void shuffle(uint8_t *list, uint16_t list_size);

/*
int main() {

  // integer array
  uint8_t list[ARRAYSIZE];// = {1, 2, 3, 4, 5, 6, 7, 8};

  // before shuffle
  for (size_t i = 0; i < ARRAYSIZE; i++) {
    //list[i] = i + 1;  // 1-8

    printf("%d ", list[i]);
  }
  printf("\n");

  // shuffle the list
  shuffle(list, ARRAYSIZE);

  // after shuffle
  for (size_t i = 0; i < ARRAYSIZE; i++) {
    printf("value[%d] = %d\n", i, list[i]);
  }
  printf("\n");

  return 0;
}
*/

// implementation
void shuffle(uint8_t *list, uint16_t list_size) {
  // Seed the random number generator with the given number. Use time.h
  srand(time(NULL));

  for (size_t i = 0; i < list_size; i++) {
    uint16_t randValue = rand() % list_size;  // get rand value

    uint16_t temp = list[i];
    list[i] = list[randValue];
    list[randValue] = temp;
  }
}
#include <stdio.h>
 void swap(int *a, int *b);
  void swap(int *a, int *b) {
      int temp;
      temp = *a;
      *a = *b;
      *b = temp;
  }

  int main() {
      int x = 5, y = 10;
      swap(&x, &y);
      printf("Swapped values: x = %d, y = %d\n", x, y);
      return 0;
  }
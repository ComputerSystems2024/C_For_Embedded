/**
 * Calculate moving avarage
 *
 */

#include <inttypes.h>
#include <stdio.h>

void movavg(float *array, uint8_t array_size, uint8_t window_size);
int main() {
  float data[5] = {1.0, 2.0, 4.0, 6.0, 9.0};

  movavg(data, 5, 3);
}
void movavg(float *array, uint8_t array_size, uint8_t window_size) {
  float avarage = 0;

  float *dataPtr = array;  //

  for (size_t i = 0; i < array_size; i++) {
    float window1_total = 0;  // store avarage of window1
    for (size_t j = 0; j < window_size; j++) {
      printf("array[%lu] = %.2f\n", j, array[j]);
      window1_total += *dataPtr;  // add value at i
    }
    avarage = window1_total / 3;  // window_size;
    printf("sum .%f, arva.%f, window_size .%f\n", window1_total, avarage,
           window_size);

    dataPtr + 1;
  }

  // dataPtr + 1;  // move window
  printf("avarage = %.f\n", avarage);
}
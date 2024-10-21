#include <inttypes.h>
//#include <stdbool.h>
#include <stdio.h>

#define CLEAR(register, bit) register &= ~(1 << bit)

int main() {
  
  int32_t is_running = -1;
  int32_t is_stopped = 0;
  int32_t is_idle = 1;
  int32_t is_busy = 25;

  // bool a = true;

  printf("%d\n", !is_stopped);
  printf(" %d\n", is_idle && is_busy);
  printf(" %d\n", is_running&&is_stopped);
  printf(" %d\n", is_running||is_stopped);
  printf(" %d\n", is_stopped||is_idle);

  return 0;
}
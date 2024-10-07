
/* convert 16-bit register value into humidity-% */


#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float humidity(uint16_t reg);

int main() {

  uint16_t reg = 0x8000; 
  humidity(reg);

  printf("Humidity = %f\n", reg);

  return 0;
}
float humidity(uint16_t reg)
{
  

}
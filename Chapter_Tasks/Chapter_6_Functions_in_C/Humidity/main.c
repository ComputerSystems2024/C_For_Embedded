// 16-bit register value = 0x8000

#include <stdio.h>
#include <inttypes.h>
#include <math.h>

float humidity(uint16_t reg);
int main()
{
    uint16_t registerValue = 0x8000; // 0b1000000000000000

    printf("%.1f%%", humidity(registerValue));

    return 0;
}
float humidity(uint16_t reg)
{
    return reg/pow(2,16)*100.0f;
}

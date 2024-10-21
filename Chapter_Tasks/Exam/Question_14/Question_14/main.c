#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

uint8_t read_sensor_data() {
    // Simulate a random sensor reading between 0 and 512;
    return rand() % 513;
}

int main() {
    srand(time(NULL));  // Seed for random number generation

    
    uint8_t sensor_value = read_sensor_data();  // Get  sensor reading  
    printf("The sensor value is: %d", sensor_value);
    printf("\n");
    return 0;
}
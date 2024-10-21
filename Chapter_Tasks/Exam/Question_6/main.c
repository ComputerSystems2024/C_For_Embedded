#include <stdint.h>
#include <stdio.h>

#include "display.h"                // Include for sending data to the display
#include "sensors/ambient_light.h"  // Include for light sensor
#include "sensors/temperature.h"    // Include for temperature sensor

// Enumeration for sensor types
typedef enum { LIGHT_SENSOR = 0, TEMPERATURE_SENSOR } sensor_type_t;

float tmp007_get_data(int sensor_id);

// Prototype for the function to get ambient light data
double opt3001_get_data(int sensor_id);

// Prototype for the function to send data to the display
void send_to_display(const char *data);






double ambientLight = -1000.0;
float temperature = -273.0;

// Function to retrieve room information based on the sensor type
void retrieve_room_information(int sensor_id, sensor_type_t sensor_type) {
  switch (sensor_type) {
    case LIGHT_SENSOR:
      // Retrieve data from the light sensor
      ambientLight = opt3001_get_data(sensor_id);
      printf("Ambient Light: %9.4lf\n", ambientLight);
      break;

    case TEMPERATURE_SENSOR:
      // Retrieve data from the temperature sensor
      temperature = tmp007_get_data(sensor_id);
      printf("Temperature: %9.4f\n", temperature);
      break;

    default:
      printf("Unknown sensor type!\n");
      break;
  }
}

// Function to show room information based on the sensor type
void show_room_information(sensor_type_t sensor_type) {

    // amp
    // temp

  char display_string[11];  // Buffer for formatted data
  switch (sensor_type) {
    case LIGHT_SENSOR:
      // Show light sensor data
      sprintf(display_string, "%9.4lf\n", ambientLight);
      send_to_display(display_string);
      break;

    case TEMPERATURE_SENSOR:
      // Show temperature sensor data
      sprintf(display_string, "%9.4f\n", temperature);
      send_to_display(display_string);
      break;

    default:
      printf("Unknown sensor type!\n");
      break;
  }
}
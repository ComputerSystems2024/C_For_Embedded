
/* Run this code with gcc -Wall -Werror  -o main main.c -lm */
#include <math.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265359
#endif

double cone_volume(double radius, double height);

int main() {
  double radius = 7;
  double height = 7;
  double volume = cone_volume(radius, height);
  printf("%f\n", volume);
  // printf("%f\n", M_PI);

  return 0;
}


double cone_volume(double radius, double height) {
  double volume = (((M_PI * pow(radius, 2)) * height) / 3);

  return volume;
}


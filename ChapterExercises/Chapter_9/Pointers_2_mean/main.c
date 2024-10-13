
/*Find the arithmetic mean of the given comma separated list of integers.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float mean(char *list);

int main() {
  char list[] = "201,53,12,31,5";  // input string
  // char list[] = "-26,90,51,71,19,-108,-98,-14,-75,84,72,18,50,99,35";  //
  // input string char list[] = "-3,49,118,81,115,-119,-27,98,-78";

  double result = mean(list);

  printf("mean = %f ", result);

  return 0;
}


float mean(char *list) {
  // int size = sizeof(list)/sizeof(list[0]);

  double mean;  // arithmetic mean

  char delimiter[] = " ,";
  char *token;  // first token

  // get the first token - string and delimiter return a pointer to the token
  token = strtok(list, delimiter);

  int tokenToIntegerValue;
  int sum = 0;
  char *endPtr;

  int counter = 0;
  while (token != NULL) {
    // token to integer
    // tokenToIntegerValue = strtol(token, NULL, 0);
    tokenToIntegerValue = strtol(token, &endPtr, 10);

    // add tokens
    sum += tokenToIntegerValue;

    //  get next token
    token = strtok(NULL, delimiter);

    // count the number of tokens
    counter++;
  }
  mean = (sum / (double)counter);
  // printf("sum %d, mean =  %.2f, counter  %d", sum, mean, counter);

  return mean;
}
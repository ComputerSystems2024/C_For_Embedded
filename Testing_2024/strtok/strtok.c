#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float mean(char *list);
/*
int main() {
  char list[] = "201,53,12,31,5";  // input string
  mean(list);

  return 0;
}
*/

float mean(char *list) {
  double mean = 0;  // arithmetic mean

  char delimiter[] = " ,";
  char *token;  // first token

  // get the first token - string and delimiter return a pointer to the token
  token = strtok(list, delimiter);

  int tokenToIntegerValue;
  int sum = 0;
  char *endPtr;

  while (token != NULL) {
    // token to integer
    //tokenToIntegerValue = strtol(tok, NULL, 0);
    tokenToIntegerValue = strtol(token, &endPtr, 10);
    // sum integers
    sum += tokenToIntegerValue;
    mean = (sum / 5.0f);

    // get next token
    token = strtok(NULL, delimiter);
  }
  printf("sum is %d mean = %.2f ", sum, mean);

  return mean;
}
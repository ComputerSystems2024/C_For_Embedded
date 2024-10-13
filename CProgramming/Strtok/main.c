
/* C Variables */

#include <inttypes.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "1234567890,temperature,27,C";
  const char sep[] = ",";  // delimiter is a comma
  char *token;             // Placeholder pointer

  // Extract the first part of the message
  token = strtok(str, sep);

  // Loop to extract the remaining parts
  while (token != NULL) {
    printf("%s\n", token);

    // Call the function again, continue from the placeholder
    token = strtok(NULL, sep);
  }

  printf("In main\n");

  return 0;
}

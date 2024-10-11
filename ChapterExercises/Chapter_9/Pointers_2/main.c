
/*Find the arithmetic mean of the given comma separated list of integers.*/

#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // char list[] = "201,53,12,31,5";  // comma separated data
  // const char delimiter[] = ",";    // delimiter is a comma

  // char* token = strtok(list, delimiter);
  // char* result;

  // char new[5] = {0};
  // // Extract tokens
  // while (token != NULL) {
  //   printf("%s\n", token);

  //   // Call the function again, continue from the placeholder
  //   token = strtok(NULL, delimiter);

  //   printf("%s\n", token);

  // }

  /*-----------------------------------*/

  char str[] = "1, 2, 3, 4, 5, 6";
  const char del[] = ",";
  char* token = strtok(str, del);  // first part

  int size = atoi(token);  // number of tokens
  printf("size %d", size);
  int counter = 0;

  int* collector;

  while (token != NULL) {  // while not the end
    printf("%s", token);
    token = strtok(NULL, del);
    
    if (token != NULL) {
      printf("%s\n", token );
      collector[counter] = atoi(token);
      printf("%d\n", collector);
      counter++;
     

      // collector[counter] = atoi(token);
    }
    

    // printf("%d", *(&token + 1));
  }
   
   

  // for (i_ctr = 0, str = strtok(input, ",");   str != NULL;  i_ctr++, str =
  // strtok(NULL, ",")) {
  //   strcpy(arr[i_ctr], str);
  // }

  return 0;
}

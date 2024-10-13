/**Factorial of a given number
 * n! n <=20 else return -1
 */

#include <stdio.h>
// #include<stdint.h>
#include <inttypes.h>
int64_t factorial(int8_t n);
/*
int main()
{
    printf("n! = %ld", factorial(5));

}
*/

int64_t factorial(int8_t n) {
  // check if n<=20
  if (n > 20) {
    return -1;
  }else if(n == 0)
  {
    return 1;
  }
  else{
    return n * factorial(n-1);
  }
}
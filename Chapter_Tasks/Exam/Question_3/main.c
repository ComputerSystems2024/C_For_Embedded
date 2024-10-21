#include <stdio.h>
#include <inttypes.h>



int main() {
    char letter = 'A';
    int number = 65;
    char text[] = "Hello";
    
    printf("1:%d 2:%c 3:%c\n", letter, number, text[0]);
    printf("1:%c 2:%d 3:%c\n", letter, number, text[0]);
   
    
    return 0;
}
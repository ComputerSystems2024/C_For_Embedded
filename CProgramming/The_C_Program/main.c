/**************************************
 * First C program                         
 **************************************/

/*
 * [1]Preprocessor directives
 ************************************************************************/
// Include the stdio library in the program
#include <stdio.h> 

// Define the constant PI
#define PI 3.14159 

/*
 *[2] Declaration of internal functions and variables in the program
 *************************************************************************/

// Declare a custom function calculate_area using a prototype
float calculate_area(float radius);  

/*
 * Implementation of the main function 
 */
int main() { 

   // Declaration (and initialization) of internal variables in the main program
   float circle_area = 0.0, circle_radius = 0.0;

   // Main program functionality
   printf("Enter the circle's radius: "); 
   scanf("%f", &circle_radius);  
   circle_area = calculate_area(circle_radius);
   printf("The area of the circle is: %.2f\n", circle_area);

   // Return value of the main program (function)
   return 0;  
}  

/*
 * Function: calculate_area, calculates the area of a circle given its radius
 * Arguments: radius, the circle's radius
 */
float calculate_area(float radius)  {

	//Declaration (and initialization) of internal variables in the function
   float area = 0.0;

   // Functionality of the function
   area = PI * radius * radius;

   // Return value of the function
   return area;  
}
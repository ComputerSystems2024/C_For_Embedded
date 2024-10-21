#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

// Each task needs its own internal stack memory
#define STACKSIZE 512
Char myTaskStack[STACKSIZE];

// Task implementation function                                        (1)
Void myTaskFxn(UArg arg0, UArg arg1) {

   // The task’s eternal life
   while (1) {                 
      System_printf("My arguments are %ld and %ld\n", arg0, arg1);
      System_flush();   

      // Politely go to sleep for a moment
      Task_sleep(1000000L / Clock_tickPeriod);
   }
}

int main(void) {

   // Data structures related to tasks
   Task_Params myTaskParams; // struct object
   Task_Handle myTaskHandle; // Task_Handle object used to refer to the task in the program
	
   // Device initialization
   Board_initGeneral();

   // Initialize task execution parameters
   Task_Params_init(&myTaskParams);
   // Assign stack memory to the task
   myTaskParams.stackSize = STACKSIZE;
   myTaskParams.stack = &myTaskStack; 
   // Set the task’s priority
   myTaskParams.priority = 2;
   // Arguments for the task (for demonstration purposes)
   myParams.arg0 = 127; // Argument 1
   myParams.arg1 = 0xFFFF; // Argument 2

   // Create the task
   myTaskHandle = Task_create((Task_FuncPtr)myTaskFxn, &myTaskParams, NULL);
   if (myTaskHandle == NULL) {	
      System_abort("Task creation failed");
   }

   // Greetings to the console
   System_printf("Hello world!\n");
   System_flush();

   // Start the program
   BIOS_start();

   return (0);
}
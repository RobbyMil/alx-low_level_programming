#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>
  
 /**
  * Main - Starting point
  * Return: always 0 for success
  */ 

 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2;
	 if (n > 0)
         {
                 printf("%i is positive\n", n);
         }
         else if (n == 0)
         {
                 printf("%i is zero\n", n);
         }
         else if (n < 0)
         {
                 printf("%i is negative\n", n);
         }
         /* your code goes there */ 
         return (0); 
 }
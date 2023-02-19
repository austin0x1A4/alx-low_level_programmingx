#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
int n;

    /* Initialize the random number generator with the current time */
srand(time(0));

    /* Generate a random number between -RAND_MAX and RAND_MAX and store it in n */
n = rand() - RAND_MAX / 2;

    /* Print the number and whether it is positive, negative, or zero */
    
if (n > 0)
 {
printf("%d is positive\n" , n);
 } 
else if (n < 0) 
    {
printf("%d is negative\n", n);
    }
else 
    {
printf("%d is zero", n);
    }
printf("\n");
return (0);
}


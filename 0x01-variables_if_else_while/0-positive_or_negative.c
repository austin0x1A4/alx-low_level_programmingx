#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers go here */

/* betty style doc for fucntion main goes here */
/**
 * main - Entry point
 *
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

/* Print the number and whether it is positive, negative, or zero */
if (n > 0)
{
printf("%d is positive\n" , n);
} 
else if (n == 0) 
{
printf("%d is zero\n", n);
}
else 
{
printf("%d is negative", n);
}
printf("\n");
return (0);
}


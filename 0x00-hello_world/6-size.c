#include <stdio.h>

/**
 *Main -A program that prints the size of various computer types
 *Return (0): Success
 */
int main (void) 
{
printf("The size of a char is %ld bytes\n", sizeof(char));
printf("The size of an int is %ld bytes\n", sizeof(int));
printf("The size of a long is %ld bytes\n", sizeof(long));
printf("The size of a long long is %ld bytes\n", sizeof(long long));
printf("The size of a float is %ld bytes\n", sizeof(float));
return (0);
}


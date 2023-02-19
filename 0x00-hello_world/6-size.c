#include <stdio.h>

/*
 * This program demonstrates how to determine the size of various types on the
 * current platform using the sizeof() operator and prints the results to the
 * console.
 */

int main() 
{
printf("The size of a char is %ld bytes\n", sizeof(char));
printf("The size of a short is %ld bytes\n", sizeof(short));
printf("The size of an int is %ld bytes\n", sizeof(int));
printf("The size of a long is %ld bytes\n", sizeof(long));
printf("The size of a long long is %ld bytes\n", sizeof(long long));
printf("The size of a float is %ld bytes\n", sizeof(float));
printf("The size of a double is %ld bytes\n", sizeof(double));
printf("The size of a long double is %ld bytes\n", sizeof(long double));
return (0);
}


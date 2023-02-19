#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) 
{
    int n;

    // Initialize the random number generator with the current time
    srand(time(0));

    // Generate a random number between -RAND_MAX and RAND_MAX and store it in n
    n = rand() - RAND_MAX / 2;

    // Print the number and whether it is positive, negative, or zero
    printf("%d is ", n);
    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf("zero");
    }
    printf("\n");

    return (0);
}


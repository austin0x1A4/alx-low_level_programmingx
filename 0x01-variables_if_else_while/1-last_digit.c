#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*  main- Entry
 * Return: Always
 */
 
int main(void) 
{
    int n;
    int a;

    srand(time(0));
    n = rand()- RAND_MAX / 2 ;
    a = n % 10;

    printf("Last digit of %d is ", n);
    a = abs(n) % 10;
    if (a > 5) {
        printf("%d and is greater than 5\n", a);
    } else if (a == 0) {
        printf("0 and is 0\n");
    } else {
        printf("%d and is less than 6 and not 0\n", a);
    }

    return (0);
}


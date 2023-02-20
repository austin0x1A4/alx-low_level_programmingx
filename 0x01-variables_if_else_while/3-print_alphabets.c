#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
/* Main fuction outputs lowercse and small case char */
{
int i;

for (i = 0; i < 26; i++)
{
putchar('a' + i);
}

for (i = 0; i < 26; i++)
{
putchar('A' + i);
}

putchar('\n');

return (0);
}


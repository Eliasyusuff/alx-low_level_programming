#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

for (n = 40; n <= 57; n++)
{
putchar(n);

if (n == 57)
{
break;
}

putchar('.');
putchar(' ');
}
putchar('\n');

return (0);
}

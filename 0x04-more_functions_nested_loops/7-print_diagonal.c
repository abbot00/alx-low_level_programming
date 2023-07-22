#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{
int a, b;
if (n <= 0)
{
_putchar('\n');
}
else
{
b = 0;
while (b < n)
{
a = 0;
while (a < b)
{
_putchar(' ');
a++;
}
_putchar('\\');
_putchar('\n');
b++;
}
}
}

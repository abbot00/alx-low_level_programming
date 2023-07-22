#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints times table
*n - number of times to be produced.
*Return: void
*/
void print_times_table(int n)
{
int i, j;
if (n > 15 || n < 0)
{
return;
}
i = 0;
while (i <= n) 
{
_putchar('0');
_putchar(',');
_putchar(' ');
 j = 1;
while (j <= n)
{
int num = i * j;
if (num < 10) 
{
_putchar(' ');
_putchar(' ');
_putchar(num + '0');
}
else if (num < 100) 
{
_putchar(' ');
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
else
{
_putchar(num / 100 + '0');
_putchar((num / 10) % 10 + '0');
_putchar(num % 10 + '0');
}
if (j != n)
{
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}

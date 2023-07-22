#include "main.h"

/**
* print_times_table - prints times table
*n - number of times to be produced.
*Return: void
*/

void print_times_table(int n)
{
int i, rev_prod, multi, prod;
if (n > 15 || n < 0)
{
return;
}
i = 0;
while (i <= n)
{
multi = 0;
while (multi <= n)
{
prod = i *multi;
if (prod == 0)
{
_putchar('0');
}
else
{
rev_prod = 0;
while (prod != 0)
{
rev_prod = rev_prod * 10 + prod % 10;
prod = prod / 10;
}
while (rev_prod != 0)
{
_putchar(rev_prod % 10 + '0');
rev_prod /= 10;
}
}
if (multi != n)
{
_putchar(',');
_putchar(' ');
}
multi++;
}
_putchar('\n');
i++;
}
}

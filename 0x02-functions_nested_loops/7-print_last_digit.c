#include "main.h"

/**
 *  print_last_digit - last digit
 *
 *@n: The int to print
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int ret = n % 10;
if (ret < 0)
{
ret = -ret;
_putchar(ret + '0');
}
else
{
_putchar(ret + '0');
}
return (ret);
}

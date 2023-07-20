#include "main.h"


/**
 * _abs - value absolute
 *
 *@n: The int to print
 * Return: Always 0.
 */
int _abs(int n)
{
int ret;
if (n < 0)
{
ret = -n;
}
else
{
ret = n;
}
return (ret);
}


#include "main.h"

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */

int _islower(int c)
{
int ret;
if (c >= 'a' && c <= 'z')
{
ret = 1;
}
else
{
ret = 0;
}
return (ret);
}

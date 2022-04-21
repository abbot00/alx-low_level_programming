#include "main.h"
/**
 * puts_half - writes the second half of a string
 *  @str: pointer to string
 * Return: void.
 */


void puts_half(char *str)
{
int n, len, i;
len = 0;
i = 0;
n = 0;
while (str[i] != '\0')
{
len++;
}
if (len % 2 == 0)
{
for (i = len / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}

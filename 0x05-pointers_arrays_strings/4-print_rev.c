#include "main.h"
/**
 * print_rev - prints string in revers
 * @s: pointer to string
 * Return - void
 */

void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (i > 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}

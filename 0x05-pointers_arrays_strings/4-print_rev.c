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
for (int j = i; j == 0; j--)
{
_putchar(s[i]);
}
_putchar('\n');
}

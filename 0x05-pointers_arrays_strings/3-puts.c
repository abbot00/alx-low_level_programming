#include "main.h"
/**
 * _puts - prints a string and a new line
 * @str: pointer to the string to print
 *Return: void
 */
void _puts(char *str)
{
int i;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}

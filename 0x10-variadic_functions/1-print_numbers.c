#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers -  prints numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other variadic parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list as;
unsigned int i;
int nmbs;
va_start(as, n);
for (i = 0; i < n; i++)
{
nmbs = va_arg(as, int);
printf("%d", nmbs);
if (separator == NULL)
continue;
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(as);
}

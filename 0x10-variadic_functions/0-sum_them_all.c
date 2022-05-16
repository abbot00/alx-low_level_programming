#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all its parameters.
 * @n: number of parameters
 * @...: Other variadic parameters
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list as;
unsigned int i = 0;
int sum = 0;
if (n == 0)
return (0);
else
va_start(as, n);
for (; i < n; i++)
sum += va_arg(as, int);
va_end(as);
return (sum);
}

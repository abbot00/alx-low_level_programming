#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: void.
 */

/**int main(void)
{

int i = 1;

while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}

if (i != 100)
{
putchar(' ');
}

i++;
}
putchar('\n');
return (0);

}
*/

void times_table(void)
{
int n = 0;
int multi;
int prod;
while (n <= 9)
{
multi = 0;
while (multi <= 9)
{

prod = (multi * n);
if (prod > 9)
{
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
else
{
_putchar(prod + '0');
}
if (multi < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
multi++;
}
n++;
}
}


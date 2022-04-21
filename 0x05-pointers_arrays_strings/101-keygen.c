#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: Always 0
 */
int main(void)
{
int j, sum, n;
int pass[100];
sum = 0;
srand(time(NULL));
for (j = 0; j < 100; j++)
{
pass[j] = rand() % 78;
sum += (pass[j] + '0');
putchar(pass[j] + '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}

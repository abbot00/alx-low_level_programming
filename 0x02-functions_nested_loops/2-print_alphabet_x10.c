#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alpha;
int x10 =0;
while (x10 < 10)
{
alpha = 'a';
while(alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
x10++;
_putchar('\n');

}
}

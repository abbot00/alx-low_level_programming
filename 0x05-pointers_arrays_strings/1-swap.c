#include "main.h"
/**
 * swap_int -  swaps value of a and b;
 * @a: - pointer
 * @b: - pointer
 * Return - void value
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
return;
}

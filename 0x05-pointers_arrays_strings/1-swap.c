/**
 * swap_int -  swaps value of a and b;
 * @a: - pointer
 * @b: - pointer
 * Return - void value
 */
void swap_int(int *a, int *b)
{
*a += *b;
*b = *a - *b;
*a = *a - *b;
}


/**
 *swap_int -  swaps value of a and b;
 *@a - pointer
 *@b - pointer
 *@c - pointer
 *Return - void value
 */
void swap_int(int *a, int *b)
{
int *c = &b;
int *b = &a;
int *a = c;
}

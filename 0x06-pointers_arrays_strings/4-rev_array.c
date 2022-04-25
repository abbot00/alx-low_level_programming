/**
 * reverse_array - function that reverses an array
 * @a: pointer to input
 * @n: pointer to output
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp;
while (i < n--)
{
temp = a[i];
a[i++] = a[n];
a[n] = temp;
}
}




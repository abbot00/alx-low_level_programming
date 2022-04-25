/**
 * _strncat - Function that copies src to dest
 * @dest: Pointer to destinantion
 * @src: pointer to source test
 * @n: int.
 * Return: returns the new dest text.
 */



char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
int tam = 0;
for (; dest[tam];)
{
tam++;
}
while (b < n && src[b])
{
dest[tam + a] = src[b];
a++;
b++;
}
return (dest);
}

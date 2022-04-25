/**
 * _strncpy - copies text from src to dest
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: intiger
 * Return: returns char of destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}

#include <stddef.h>
/**
 * _strpbrk - searches for a set of bytes
 * @s: pointer to the string
 * @accept: pointer to string
 * Return: pointer to the byt in s
 * that matches accept.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
return (s);
}
}
s++;
}
return (NULL);
}

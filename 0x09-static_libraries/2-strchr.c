#include <stddef.h>
/**
 * _strchr - locates ar character in a string
 * @s: pointer to string]
 * @c: character
 * Return: pointer to first c
 */
char *_strchr(char *s, char c)
{
  while (*s)
    {
      if (*s == c)
	{
	  return (s);
	}
      s++;
    }
  return (!c ? s : NULL);
}

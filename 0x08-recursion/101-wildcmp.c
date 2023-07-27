#include "main.h"
/**
  * wildcmp - a funcition that compares two strings
  * @s1: first string to be compered.
  * @s2: second string to be compared.
  * Return: 1 if they are equal, else 0;
  **/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
}
if (*s1 != *s2)
{
return (0);
}
return (wildcmp(s1 + 1, s2 + 1)); 
}

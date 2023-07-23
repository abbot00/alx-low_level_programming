#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: Pointer to the string
 * Return: returns an int, the lenght of string
 */



int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

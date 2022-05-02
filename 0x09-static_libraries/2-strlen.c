/**
 * _strlen - finds the length of a string
 * @s: Pointer to the string
 * Return: returns an int, the lenght of string
 */

int _strlen(char *s)
{
  int a = 0;
  while (s[a])
    a++;
  return (a);

}

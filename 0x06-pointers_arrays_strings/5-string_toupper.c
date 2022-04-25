/**
 *string_toupper - turns lower case strings to upper
 * @s: pointer to string
 * Return: the upper case string.
 */
char *string_toupper(char *s)
{
char *res = s;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (res);
}

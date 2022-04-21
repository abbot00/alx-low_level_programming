
/**
 * _atoi - converts strings to integers
 * @s: Pointer to string
 * Return - the integer output
 */
int _atoi(char *s)
{
int result = 0;
int i;
for (i = 0; s[i] != '\0'; ++i)
{
result = result * 10 + s[i] - '0';
}
return result;
}

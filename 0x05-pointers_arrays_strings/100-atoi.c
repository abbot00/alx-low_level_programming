
/**
 * _atoi - converts strings to integers
 * @s: Pointer to string
 * Return: the integer output
 */
int _atoi(char *s)
{
int result = 0;
int i;
int sig = -1;
int brk = 0;
for (i = 0; s[i] != '\0'; ++i)
{
if (s[i] == '-')
sig = sig * -1;
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10;
result -= (s[i] - '0');
brk = 1;
}
else if (brk == 1)
break;
}
result = sig *result;
return (result);
}

/**
 * cap_string - conerts to capital letters
 * @s: pointer to string
 * Return: returns a char
 */

int check(char c);
char *cap_string(char *s)
{
int i = 0;
while (s[i])
{
if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
s[i] -= 32;
if (check(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
s[i + 1] -= 32;
i++;
}
return (s);
}

/**
 * check - separators of words
 * @c: char
 * Return: 1 if seperator, 0 if not
 */
int check(char c)
{
int i = 0;
char sep[13] = { ' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}' };
for (; i < 13; i++)
{
if (c == sep[i])
return (1);
}
return (0);
}

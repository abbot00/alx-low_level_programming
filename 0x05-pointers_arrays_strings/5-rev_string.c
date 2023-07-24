/**
 * rev_string - prints reversed strings followed by a line
 * @s: pointer to the string to print.
 * Return: void.
 */


void rev_string(char *s)
{
char temp;
int i, len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}

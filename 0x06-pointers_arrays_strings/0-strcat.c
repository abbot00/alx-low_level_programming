/**
 *_strcat - cats src to destination
 * @dest: pointer to destinatation
 * @src: pointer to sorce
 * Return:  char of the dest
 */

char *_strcat(char *dest, char *src)
{
char *s = dest;
while (*dest)
{
dest++;
}
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return (s);
}

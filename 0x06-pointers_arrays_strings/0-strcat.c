/**
 *_strcat - cats src to destination
 * @dest: pointer to destinatation
 * @src: pointer to sorce
 * Return:  char of the dest
 */

/**char *_strcat(char *dest, char *src)
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
*/
char *_strcat(char *dest, char *src)
{
int i, destlen = 0;
while(dest[destlen]  != '\0')
{
destlen++;
}
for(i = 0; src[i] != '\0'; i++)
{
dest[destlen +i] = src[i];
}
dest[destlen + i] = '\0';
return (dest);
}

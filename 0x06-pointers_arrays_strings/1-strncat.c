#include "holberton.h"
/**
 * _strncat - cat a string
 * @src: char and source
 * @dest: print destination
 * @n: variable stuff
* Return: not oof
*/

char *_strncat(char *dest, char *src, int n)
{

int yada, blah;
blah = _strlen(dest);
{
for (yada = 0; yada < n; yada++, blah++)
{
if (src[yada] == 00)
{
break;
}
dest[blah] = src[yada];
}
}
return (dest);
}
/**
 * _strlen - return the length of the string
 *@s: the length of the string
 *
 * Return: the length(x)
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*(s + x) != '\0')
{
x++;
}
return (x);
}

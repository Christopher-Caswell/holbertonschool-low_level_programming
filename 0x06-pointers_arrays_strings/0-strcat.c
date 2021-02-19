#include "holberton.h"
/**
 * _strcat - catenates two strings
 * @dest: variable
 * @src: variable
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{

int x, y;
x = _strlen(dest);

for (y = 0; src[y] != 00;x++, y++)
{
dest[x] = src[y];
}
dest[x] = 00;

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

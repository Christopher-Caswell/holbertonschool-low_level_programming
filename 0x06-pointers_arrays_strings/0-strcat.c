#include "holberton.h"
/**
 * _strcat - catenates two strings
 * @dest: variable
 * @src: variable
 * Return: end
*/
char *_strcat(char *dest, char *src)
{

int x, y;
char z;
z = _strlen(src);

for (x = 0; dest[x] <= z; x++)
{
}
for (y = 0; src[y] != 00; y++)
{
dest[x + y] = src[x];
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

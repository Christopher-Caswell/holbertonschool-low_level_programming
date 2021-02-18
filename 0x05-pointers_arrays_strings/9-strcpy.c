#include "holberton.h"

/**
 * *_strcpy - print string
 * @dest: jargon
 * @src: jargon
 *
 * Return: nada
 */
char *_strcpy(char *dest, char *src)
{

int x, y;

x = _strlen(src);

for (y = 0; y <= x; y++)
{

dest[y] = src[y];
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

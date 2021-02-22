#include "holberton.h"

/**
 * _memcpy - copy one file to another
 * @n: variable for volume to copy
 * @dest: destination for copy
 * @src: source to copy
 * Return: dest(ination)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int x;

for (x = 0; x <= n; x++)
{

dest[x] = src[x];
}

return (dest);
}

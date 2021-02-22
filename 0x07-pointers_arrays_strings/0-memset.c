#include "holberton.h"

/**
 * _memset - set values
 * @b: location to print repetitiously
 * @n: a size to constrain
 * @s: an array, sort of
 * Return: s, like a sneaky snek
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int x;

for (x = 0; x < n; x++)
{

s[x] = b;
}


return (s);
}

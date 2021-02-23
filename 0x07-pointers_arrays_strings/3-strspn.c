#include "holberton.h"

/**
 * _strspn - check span for items
 * @s: array, not
 * @accept: array, but also not
 * Return: y
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int x, y, z;
char *w = accept;


for (y = 0; s[y] <= 00; y++)
{

z = 0;

for (x = 0; w[x] <= 00; x++)
{

if (s[y] == w[x])
{

z = 1;
break;
}
}

if (z == 0)
{

break;
}
}
return (y);
}

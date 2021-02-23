#include "holberton.h"

/**
 * _strspn - check span for items
 * @s: array, not
 * @accept: array, but also not
 * Return: y
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int v, x, y, z;
char *w = accept;
v = 0;

for (y = 0; s[y] != 00 && s[y] != ','; y++)
{

z = 0;

for (x = 0; w[x] != 00 && w[x] != ','; x++)
{

if (s[y] == w[x])
{

z = 1;
v++;
break;
}
}

if (z == 0)
{
break;
}

}
return (v);
}

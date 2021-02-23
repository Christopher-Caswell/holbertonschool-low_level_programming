#include "holberton.h"

/**
 * _strpbrk - deer eatin' trees do what?
 * @s: the pass
 * @accept: the array
 * Return:  the pass as through the array
 */

char *_strpbrk(char *s, char *accept)
{

unsigned int x;

for (; *s != 00; s++)
{

for (x = 0; accept[x] != 00; x++)
{

if (*s == accept[x])
{

return (s);
}
}
}
return (00);
}

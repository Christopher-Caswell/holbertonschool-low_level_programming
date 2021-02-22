#include "holberton.h"

/**
 * _strchr - f[x] of f[x]
 * @s: the array(?)
 * @c: a programming language, also what we seek
 * Return: y, which in this case is the pointer of c or NULL
 */

char *_strchr(char *s, char c)
{

while (*s != c)
{

if (*s == '\0')

return (NULL);
s++;
}
return (s);
}

#include "holberton.h"

/**
 * str_concat - catenate a pair of strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: the strings concatenated
 */

char *str_concat(char *s1, char *s2)
{

char *w;
int x, y, z1, z2;
x = 0;
y = 0;

if (s1 == 00)
return (00);
if (s2 == 00)
return (00);

z1 = _strlen(s1);
z2 = _strlen(s2);

w = malloc(z1 + z2 + 1);

if (w == 00)
return (00);

for (; x < z1; x++)
{

w[x] = s1[x];
}

for (; y < z2; x++, y++)
{

w[x] = s2[y];
}

w[x] = 00;
return (w);
}

/**
 * _strlen - return the length of the string, which includes the null bite
 *@s: the length of the string
 *
 * Return: the length(x)
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*(s + x) != 00)
{
x++;
}
return (x);
}

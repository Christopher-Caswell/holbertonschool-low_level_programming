#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concat 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: the space
 * Return: the concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

unsigned int y;
int z;
char *x = NULL;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if (n >= _strlen(s2))
n = _strlen(s2);
/*write a f(x) that cats 2 str*/

x = malloc(sizeof(char) * _strlen(s1) + n + 1);

if (x == NULL)
return (NULL);

y = 0;
z = 0;

for (; s1[y] != 00; y++, z++)
x[z] = s1[y];

for (y = 0; y < n; z++, y++)
{

x[z] = s2[y];
}

x[z] = 00;
return (x);
}

/**
 * _strlen - return the length of the string, which includes the null bite
 *@s: the length of the string
 *
 * Return: the length(x)
 */
unsigned int _strlen(char *s)
{
int x;
x = 0;
while (*(s + x) != 00)
{

x++;
}

return (x);
}

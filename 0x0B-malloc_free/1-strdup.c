#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string at str
 * @str: the copy
 * Return: the copy of str
 */

char *_strdup(char *str)
{

if (str == 00)
return (00);

char *x = (char *)malloc(_strlen(str) + sizeof(char));
unsigned int y = 0;

if (x == 00)
return (00);

while (str[y] != 00)
{

x[y] = str[y];
y++;
}

return (x);
}

#include "holberton.h"
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
while (*(s + x) != 00)
{
x++;
}
return (x);
}

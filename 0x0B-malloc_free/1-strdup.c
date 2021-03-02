#include "holberton.h"

/**
 * _strdup - duplicate string at str
 * @str: the copy
 * Return: the copy of str
 */

char *_strdup(char *str)
{

if (str == NULL)
return (NULL);

char *x = (char *)malloc((_strlen(str) + 1) * sizeof(char));
int y = 0;

if (x == NULL)
return (NULL);

for (; str[y] != 00; y++)
{

x[y] = str[y];
}

x[y] = 00;
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

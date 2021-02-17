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

while (*(s + x) != '\0')
{

x++;
}

return (x);
}

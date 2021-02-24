#include "holberton.h"

/**
 * _strlen_recursion - finding the volume of the string
 * @s: using to find the length
 * Return: s
 */

int _strlen_recursion(char *s)
{

if (*s == 00)
{

return (0);
}

else
{

return (1 + _strlen_recursion(s + 1));
}
}

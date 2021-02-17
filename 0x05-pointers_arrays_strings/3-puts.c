#include "holberton.h"

/**
 * _puts - print a string
 * @str: the string
 * Return: nada
 */

void _puts(char *str)
{

int x;

for (x = 0; str[x] != '\0'; x++)
{

_putchar(str[x]);
}

_putchar('\n');


return;
}

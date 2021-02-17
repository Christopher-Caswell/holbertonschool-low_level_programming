#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: length of the string
 * Return: print the chars
 */

void print_rev(char *s)
{

int x, y;

y = _strlen[s];

for (x = y - 1; x >= 0; x--)
{

_putchar(s[x]);

}
putchar('\n');

return;
}
/**
 * _strlen - yes
 * @s: variable used
 * Return: null
 */
int _strlen(char *s)

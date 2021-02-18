#include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: length of the string
 * Return: print the chars
 */

void print_rev(char *s)
{

int x;
int y;
y = _strlen(s);

for (x = (y - 1); x >= 0; x--)
{

_putchar(s[x]);

}
putchar('\n');

return;
}


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

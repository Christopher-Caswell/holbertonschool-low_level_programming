#include "holberton.h"

/**
 * print_numbers - print 0-9 followed by a new line
 *
 * Return: 0, end after print
 */

void print_numbers(void)

{

char n;

for (n >= '0'; n <= '9'; n++)
{

_putchar(n);
_putchar('\n');
}

return;
}

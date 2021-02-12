#include "holberton.h"

/**
 * print_most_numbers - print numbers 0-9, except 2 and 4
 * _putchar - better as putchar, ngl
 * Return: 0, end function after print
 */

void print_most_numbers(void)
{

char x;

for (x = '0'; x <= '9'; x++)
{

if (x == '2' || x == '4')
continue;

else

_putchar(x);
}

_putchar('\n');
}

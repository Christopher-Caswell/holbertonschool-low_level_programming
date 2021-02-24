#include "holberton.h"

/**
 * _print_rev_recursion - the increment of the string
 * @s: the string
 * Return: s in reverse
 */

void _print_rev_recursion(char *s)
{

if (*s == 00)
{

return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}

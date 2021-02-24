#include "holberton.h"

/**
 * _puts_recursion - the recurring item and prototype
 * @s: the variable being recurred
 * Return: string located at s
 */

void _puts_recursion(char *s)
{

if (*s != 00)
{

_putchar(*s);
_puts_recursion(s + 1);
}

if (*s == 00)

_putchar(10);
}

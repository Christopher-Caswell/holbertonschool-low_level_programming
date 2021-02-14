#include "holberton.h"

/**
 * print_triangle - this. what it says. proto
 * @size: int
 * Return: 1 and done
 */

void print_triangle(int size)
{ /* open 1*/

if (size < 0)
{
_putchar('\n');
}
char x, y;
for (x = 1; x <= size; x++)
{ /* open 2*/
for (y = 1; y <= size; y++)
{ /* open 3*/
if (y <= (size - x))
{ /* open 4*/
_putchar(' ');
} /* close 1*/
else
{ /* open 5*/
_putchar('#');
}
}
_putchar('\n');
}
return;
}

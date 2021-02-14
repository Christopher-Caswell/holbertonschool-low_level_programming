#include "holberton.h"

/**
 * print_triangle - this. what it says. proto
 *
 * Return: 1 and done
 */

void print_triangle(int size)
{ /* open 1*/
char x;
char y;

for (x = 1; x <= size; x++)
{ /* open 2*/
for (y = 1; y <= size; y++)
{ /* open 3*/
if (y <= (size - x))
{ /* open 4*/
putchar(' ');
} /* close 1*/
else
{ /* open 5*/
putchar('#');
}
}
putchar('\n');
}
return;
}

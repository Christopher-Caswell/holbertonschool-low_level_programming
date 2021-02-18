#include "holberton.h"
#include <stdio.h>

/**
 * print_array - uses *a and n to print y
 * @a: the array
 * @n: the count(not sesame)
 * Return: 0
*/

void print_array(int *a, int n)
{

int y;

for (y = 0; y < (n - 1); y++)
{

printf("%d, ", a[y]);
}

printf("%d\n", a[n - 1]);

return;
}

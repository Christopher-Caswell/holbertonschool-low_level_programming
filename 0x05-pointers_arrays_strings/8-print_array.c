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

for (y = 1; y < n; y++)
{

printf("%d, ", a[y - 1]);
}

printf("%d", a[n - 1]);
printf("\n");

return;
}
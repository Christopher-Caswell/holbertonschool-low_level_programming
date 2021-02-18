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

int x;

for (x = 0; x <= n - 1; x++)
{

printf("%d", a[x]);

if (x != n - 1)
{

printf(", ");
}

}
printf("\n");

return;
}

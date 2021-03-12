#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - print an array
 * @separator: the variable used to space between inputs
 * @n: arg volume
 * Return: the new array
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list list;
unsigned int x;

if (n != 0)
{

va_start(list, n);

for (x = 0; x < n; x++)
{

printf("%d", va_arg(list, int));

if (separator != NULL && x != n - 1)
printf("%s", separator);
}

va_end(list);

}
printf("\n");
return;
}

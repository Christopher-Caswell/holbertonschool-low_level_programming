#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings - Write a function that prints strings, followed by a 10
 * @separator: the space between the strings
 * @n: the volume of strings
 * Return: strings, folllowed by a 10
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
va_list list;
char *idk;

va_start(list, n);
for (; x < n; x++)
{

idk = va_arg(list, char*);
{

if (idk == NULL)
printf("(nil)");
else
printf("%s", idk);
}

if (separator != NULL && x < n - 1)
printf("%s", separator);

va_end(list);
}
printf("\n");
}

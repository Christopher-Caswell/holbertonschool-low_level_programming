#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - add all variables together
 * @n: the number of variables
 * Return: the total sum
 */

int sum_them_all(const unsigned int n, ...)
{

va_list list;
int x = (int)n, sum = 0;

if (n == 0)
return (0);

va_start(list, n);

for (; x; x--)
sum += va_arg(list, int);
va_end(list);
return (sum);

}

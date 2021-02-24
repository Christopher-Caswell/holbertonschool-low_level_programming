#include "holberton.h"

/**
 * factorial - protomoto
 * @n: the moto to proto
 * Return: n, which is the factorial of a prescribed value in main
 */

int factorial(int n)
{

if (n >= 1)
{

return (n * factorial(n - 1));
}

if (n == 0)
{

return (1);
}

if (n < 0)
{

return (-1);
}

return (n);
}

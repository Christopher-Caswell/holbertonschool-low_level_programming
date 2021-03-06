#include "holberton.h"

/**
 * _sqrt_recursion - defining the rootable
 * @n: the rooter
 * Return: nootnoot to the power of n
 */

int _sqrt_recursion(int n)
{

return (nootnoot(0, n));
}


/**
 * nootnoot - the identifier for x^y
 * @x: the pass
 * @n: the volume
 * Return: the variable passed into _sqrt_recursion
 */

int nootnoot(int x, int n)
{

int y = x * x;

if (y > n)
{

return (-1);
}

if (x * x == n)
{

return (x);
}

x++;
return (nootnoot(x, n));
}

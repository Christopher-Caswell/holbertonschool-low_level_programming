#include "holberton.h"

/**
 * _pow_recursion - looping but not
 * @x: what to exponent
 * @y: the exponent
 * Return: the result
 */

int _pow_recursion(int x, int y)
{


if (y == 0)
{

return (1);
}


if (y < 0)
{

return (-1);
}

else
{

return (x * _pow_recursion(x, y - 1));
}
}

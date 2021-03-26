#include "holberton.h"

/**
 * clear_bit - set a bit to 0
 * @n: the bit change
 * @index: the location to change
 * Return: 1 if yes, -1 if no
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

if (index > 63)
return (-1);

*n &= ~(1 << index);
return (1);
}

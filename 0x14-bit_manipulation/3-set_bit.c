#include "holberton.h"

/**
 * set_bit - changes the value of a bit
 * @n: wherer to set
 * @index: where to change
 * Return: 1 if yes, -1 if no
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index > 63)
return (-1);

*n |= (1 << index);
return (1);
}

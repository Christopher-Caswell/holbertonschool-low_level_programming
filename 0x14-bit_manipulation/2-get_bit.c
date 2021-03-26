#include "holberton.h"

/**
 * get_bit - returns an index at a certain point
 * @n: the input
 * @index:  
 */

int get_bit(unsigned long int n, unsigned int index)
{

if (index > 63)
return (-1);

if ((n >> index) & 1)
return (1);

return (0);
}

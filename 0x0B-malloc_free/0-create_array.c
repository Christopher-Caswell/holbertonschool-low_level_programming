#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - write f(x) that *" ." Init w/ specific char
 * @c: the array filler
 * @size: the array volume
 * Return: NULL if size 0
 */

char *create_array(unsigned int size, char c)
{

unsigned int y;
char *x = (char *)malloc(size);

if (size == 0)
return (00);

if (x == 00)
return (00);

for (y = 0; y < size; y++)
{

x[y] = c;
}

return (x);
}

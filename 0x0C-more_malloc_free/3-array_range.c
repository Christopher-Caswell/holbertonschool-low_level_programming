#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - do what it says
 * @min: minimum variable
 * @max: maximum variable
 * Return: the pointer to the new array
 */

int *array_range(int min, int max)
{

int *x;
int y;

if (min > max)
return (NULL);

if (x  NULL)
return (NULL);

x = malloc(sizeof(int) * (max - min + 1));

for (y = 0; min <= max; y++, min++)
x[y] = min;

return (x);
}

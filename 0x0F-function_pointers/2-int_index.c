#include "function_pointers.h"

/**
 * int_index - ret the index of the 1st elem cmp doesnt return 0
 * @cmp: pointer to the fx to compare value
 * @size: number of elements in array
 * @array: location of given variables
 * Return: varies, preferably integers
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int x;
x = 0;

if (size <= 0)
return (-1);

if (array != NULL && cmp != NULL)

{
for (; x < size; x++)
{

if (cmp(array[x]) != 0)
return (x);

if (x == size)
return (-1);
}
}
return (-1);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * @array: an array of integers
 * @size: the size of the array
 * @action: the location to which we print
 * Return: a function execution, given as parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

if (array != NULL && action != NULL)
{

for (i = 0; i < size; i++)
action(array[i];
}
}

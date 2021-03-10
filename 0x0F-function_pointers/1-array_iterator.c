#include "function_pointers.h"

/**
 * array_iterator - an array of integers
 * @array: the above
 * @size: the size of the array
 * @action: the location to which we print
 * Return: a function execution, given as parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int x = 0;

if (array != NULL && action != NULL)
{

for (x = 0; x < size; x++)
action(array[x]);
}
}

#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers
 * @array: array of integers, assigned via pointer
 * @size: size of array
 * @value: value for whom we seek
 * 
 * Return: index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
    unsigned int x;
    
    if (array == NULL)
        return (-1);

    for (x = 0; x < size; x++)
    {
        printf("Value checked array[%d] = [%d]\n", x, array[x]);
        if (array[x] == value)
            return (x);
    }

    return (-1);
}

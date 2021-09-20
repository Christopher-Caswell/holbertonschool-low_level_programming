#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search for
 * 
 * Return: index of the value if found, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
    size_t start = 0, end = size - 1, mid;

    if (array == NULL)
        return (-1);

    while (start <= end)
    {
        printf("Searching in array: ");
        mid = (start + end) / 2;
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            printf(", %d", array[mid]);
            start = mid + 1;
        else if (array[mid] > value)
            printf(", %d", array[mid]);
            end = mid - 1;
    }
    return (-1);
}

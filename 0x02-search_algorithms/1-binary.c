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
size_t start = 0, end = size - 1, mid, x;

if (array == NULL)
return (-1);

while (start <= end)
{

mid = (start + end) / 2;
printf("Searching in array: ");

for (x = start; x < end; x++)
printf("%d, ", array[x]);
printf("%d\n", array[x]);

if (array[mid] == value)
return (mid);

if (array[mid] < value)
{
start = mid + 1;

if (start > end)
return (-1);
}

if (array[mid] > value)
{
end = mid - 1;

if (end < start)
return (-1);
}
}
return (-1);
}

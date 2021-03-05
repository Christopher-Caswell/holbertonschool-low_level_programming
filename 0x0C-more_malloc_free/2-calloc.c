#include "holberton.h"

/**
 * _calloc - learning to fly
 * @nmemb: an int /wing
 * @size: the size in bytes /wing
 * Return: a void pointer to an array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *x;
unsigned int y;
y = 0;

if (nmemb == 0 || size == 0)
return (NULL);

x = malloc(nmemb * size);

if (x == NULL)
return (NULL);

for (; y < (nmemb * size); y++)
x[y] = 00;

return (x);
}

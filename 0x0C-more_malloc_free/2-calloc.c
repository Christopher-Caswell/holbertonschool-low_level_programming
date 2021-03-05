#include "holberton.h"

/**
 *
 *
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *x;
unsigned int y;
y = 0;

if (nmemb == 0 || size == 0)
return NULL;

x = (void *)malloc(nmemb * size);

if (x == NULL)
return NULL;

for (; x[y] <= (nmemb * size); y++)
x[y] = 00;

return (x);
}

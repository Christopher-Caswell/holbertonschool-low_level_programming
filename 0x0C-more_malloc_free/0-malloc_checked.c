#include "holberton.h"
#include <limits.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: to whence
 * Return: the point
 */

void *malloc_checked(unsigned int b)
{


void *x;
/* Write a F(x) that allocates memory using malloc*/

x = malloc(sizeof(b));

/* if malloc fails, the f(x) should cause*/
/*normal process term. w/ a status of 98*/

if (b == 00)
exit(98);

return (x);
}

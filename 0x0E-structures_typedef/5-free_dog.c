#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - yes, plox
 * @d: the structure to free
 * Return: a free puppy
 */

void free_dog(dog_t *d)
{

if (d != NULL)
{
free(d);
}
}

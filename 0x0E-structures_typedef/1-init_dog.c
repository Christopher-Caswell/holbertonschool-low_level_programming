#include "dog.h"

/**
 * init_dog - the dog's details
 * @d: the structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)

{
d->name = name;
d->age = age;
d->owner = owner;
}
}

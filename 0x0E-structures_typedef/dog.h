#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - the woofer's info
 * @name: woofer's name
 * @owner: woofer's bestie
 * @age: woofer's age
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

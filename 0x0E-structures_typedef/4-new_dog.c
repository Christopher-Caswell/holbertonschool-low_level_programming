#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - plz
 * @name: the name in struct
 * @age: the age in struct
 * @owner: the owner in struct
 * Return: Null or none
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d = malloc((sizeof(struct dog)));
if (d == NULL)
{
return (NULL);
}
(*d).age = age;
(*d).name = _strdup(name);
if ((*d).name == NULL)
{
free(d);
return (NULL);
}
(*d).owner = _strdup(owner);
if ((*d).owner == NULL)
{
free((*d).name);
free(d);
return (NULL);
}
return (d);
}
/**
 * _strdup - duplicate string at str
 * @str: the copy
 * Return: the copy of str
 */

char *_strdup(char *str)
{

int y;
char *x;

if (str == 00)
return (00);

x = (char *)malloc((_strlen(str) + 1) * sizeof(char));

y = 0;

if (x == 00)
return (00);

for (; str[y] != 00; y++)
{

x[y] = str[y];
}

x[y] = 00;
return (x);
}

/**
 * _strlen - return the length of the string
 *@s: the length of the string
 *
 * Return: the length(x)
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*(s + x) != 00)
{
x++;
}
return (x);
}

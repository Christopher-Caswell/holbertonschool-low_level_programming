#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - does what it says
 * @name: a pointer to a character
 *@f: a pointer to information to fill
 *Return: name, as defined by the void pointer
 */

void print_name(char *name, void (*f)(char *))
{

if (name != NULL && f != NULL)
{

f(name);
}
}

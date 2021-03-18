#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - does what it says
 * @list_t: the list used in main to print
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{

if (h == NULL)
return (0);

if (!h->str)
printf("[0] (nil)");

printf("[%d] %s", h->len, h->str);

return (0);
}

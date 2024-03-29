#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - does what it says
 * @h: the list used in main to print
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{

int x = 0;

for (; h != NULL; x++)
{

if (!h->str)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);

h = h->next;
}

return (x);
}

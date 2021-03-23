#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - does what it says
 * @h: the int
 * Return: the number of nodes
 */


size_t print_listint(const listint_t *h)
{

int x = 0;

while (h != NULL)
{

printf("%d\n", h->n);

h = h->next;
x++;

}

return (x);
}

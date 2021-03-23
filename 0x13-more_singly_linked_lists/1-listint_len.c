#include "lists.h"

/**
 * listint_len - node counter
 * @h: pointer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{

int x = 0;

while (h != NULL)
{

h = h->next;
x++;
}
return (x);
}

#include "lists.h"

/**
 * list_len - the arrays inside the list
 * @h: the struct
 * Return: the innards of h
 */

size_t list_len(const list_t *h)
{

if (h == NULL)
return (0);
else
return (1 + h->len(h->next));
}

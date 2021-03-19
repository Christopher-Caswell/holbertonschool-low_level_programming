#include "lists.h"

/**
 * add_node - appends a node to the beginning of the string
 * @head: the pointer to the first node in the list
 * @str: the string feed
 * Return: List with a new head
 *
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *x;

if (head == NULL)
return (NULL);
if (str == NULL)
return (NULL);

x = malloc(sizeof(list_t));

if (x == NULL)
return (NULL);

x->str = strdup(str);

if (x->str == NULL)
{

free(x);
return (NULL);
}

x->len = _strlen(x->str);
x->next = *head;
*head = x;

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
while (*(s + x) != '\0')
{
x++;
}
return (x);
}

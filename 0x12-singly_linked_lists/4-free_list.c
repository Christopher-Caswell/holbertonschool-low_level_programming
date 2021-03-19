#include "lists.h"

/**
 * free_list - clears memory allocated in add_node
 * @head: stuff to free
 * Return: nothing
 */
void free_list(list_t *head)
{

list_t *willy;

while (head != NULL)
{

willy = head->next;
free(head->str);
free(head);
head = willy;
}

}

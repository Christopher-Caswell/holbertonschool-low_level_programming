#include "hash_tables.h"

/**
 * hash_table_create - What <- said
 * @size: array input
 * Return: a pointer to coffee table and/or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *coffee = NULL;

	coffee = malloc(sizeof(hash_table_t));
	if (!coffee)
		return (NULL);
	coffee->array = malloc(sizeof(hash_node_t *) * size);
	coffee->size = size;
	if (!coffee->array)
		return (NULL);
	return (coffee);
}

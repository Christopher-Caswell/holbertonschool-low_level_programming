#include "hash_tables.h"

/**
* hash_table_t - Hash table
* @ht: Hash table
*
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{

hash_node_t *node = NULL, *noods = NULL;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{

node = ht->array[i];

while (node != NULL)
{

noods = node;
node = node->next;
free(noods->key);
free(noods->value);
free(noods);
}
}

free(ht->array);
free(ht);
}

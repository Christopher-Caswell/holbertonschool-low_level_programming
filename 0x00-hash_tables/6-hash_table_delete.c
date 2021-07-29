#include "hash_tables.h"

/**
* hash_table_t - Hash table
* @ht: Hash table
*
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{

hash_node_t *node = NULL, *nood = NULL;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{

node = ht->nodes[i];

while (node != NULL)
{

nood = node;
node = node->next;
free(nood->key);
free(nood->value);
free(nood);
}
}

free(ht->array);
free(ht);
}

#include "hash_tables.h"

/**
* hash_table_print - Prints the contents of a hash table.
* @ht: The hash table to print.
*
* Return: NULL
*/

void hash_table_print(const hash_table_t *ht)
{
    int x;

    if (ht == NULL)
    {
        return NULL;
    }

    for (x = 0; x < ht->size; x++)
    {
        printf("\'%s\': \'%d\',", ht->array[x]->key, ht->array[x]->value);
    }
}

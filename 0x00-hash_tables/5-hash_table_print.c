#include "hash_tables.h"

/**
* hash_table_print - Prints the contents of a hash table.
* @ht: The hash table to print.
*
* Return: NULL
*/

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int x;
    hash_node_t *polyp;

    if (ht == NULL)
    {
        return;
    }

    printf("{");
    for (x = 0; x < ht->size; x++)
    {
        polyp = ht->array[x];
        while (polyp != NULL)
        {
        printf("\'%s\': \'%s\',", polyp->key, polyp->value);
        polyp = NULL;
        }
    }
    printf("}\n");
}

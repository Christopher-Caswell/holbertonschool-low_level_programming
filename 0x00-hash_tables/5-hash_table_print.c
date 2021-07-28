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
    hash_node_t *polyp = NULL;
    int y = 0;

    if (ht == NULL)
    {
        return;
    }

    printf("{");
    for (x = 0; x < ht->size; x++)
    {
        if (ht->array[x] != NULL && y < ht->array[x]->size && y > 0)
        {
            printf(", ");
        }

        polyp = ht->array[x];

        while (polyp != NULL)
        {
        y++;
        printf("\'%s\': \'%s\'", polyp->key, polyp->value);
        if (polyp->next != NULL)
        {
            printf(", ");
        }
        polyp = polyp->next;
        }
    }
    printf("}\n");
}

#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table
*  
* @key: Key
* @value: Value
* @hash_table_t: Hash table
* 
* Return: 1 if successful, 0 if not
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

    unsigned long int x = 0;
    hash_node_t *newguy = NULL, *temp = NULL;

    if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
    {
        return 0;
    }

    newguy = malloc(sizeof(hash_node_t));
    if (newguy == NULL)
    {
        return 0;
    }

    newguy->value = (char *) strdup(value);
    newguy->key = (char *) strdup(key);
    newguy->next = NULL;

    x = key_index((const unsigned char *)(key), ht->size);

    if (ht->array[x] == NULL || strcmp(ht->array[x]->key, key) == 0)
    {
        ht->array[x] = newguy;
    }
    else
    {
        temp = ht->array[x];
        newguy->next = temp;
        ht->array[x] = newguy;
    }
    return 1;
}

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

    int x;
    hash_node_t *newguy = NULL, *temp = NULL;

    if (ht == NULL || key == NULL || value == NULL)
    {
        return 0;
    }

    newguy = (hash_node_t *)malloc(sizeof(hash_node_t));
    if (newguy == NULL)
    {
        return 0;
    }

    newguy->key = (char *)malloc(strlen(key) + 1);
    if (newguy->key == NULL)
    {
        free(newguy);
        return 0;
    }
    strcpy(newguy->key, key);
    newguy->value = (char *)malloc(strlen(value) + 1);
    if (newguy->value == NULL)
    {
        free(newguy->key);
        free(newguy);
        return 0;
    }
    strcpy(newguy->value, value);
    newguy->next = NULL;

    if (ht->array[x] == NULL || ht->array[x]->next == NULL)
    {
        ht->array[x] = newguy;
    }
    else
    {
        temp = ht->table[x];
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newguy;
    }
    return 1;
}

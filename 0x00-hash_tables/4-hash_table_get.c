#include "hash_tables.h"

/**
* hash_table_get - Get the value of a key in a hash table
* @ht: The hash table
* @key: The key
*
* Return: The value of the key in the hash table or NULL if the key is not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{

unsigned long int x;
hash_node_t *sojourner;

if (ht == NULL || key == NULL)
return (NULL);

x = (hash_djb2((unsigned char *) key) % ht->size);

sojourner = ht->array[x];

if (sojourner == NULL)
return (NULL);
    
while (sojourner != NULL)
{
if (strcmp(sojourner->key, key) == 0)
return (sojourner->value);

sojourner = sojourner->next;
}

if (strcmp(sojourner->key, key) == 0)
return (sojourner->value);
        
return (NULL);
}

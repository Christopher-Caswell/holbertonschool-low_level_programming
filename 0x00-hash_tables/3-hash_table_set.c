#include "hash_tables.h"

/**
* hash_table_set - Hash table set
*  
* @key: Key
* @value: Value
* 
* Return: 1 if successful, 0 if not
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    int i;
    int hash_value;
    hash_entry_t *entry;

    hash_value = hash_string(key);
    i = hash_value % ht->size;
    entry = ht->table[i];
    while (entry != NULL) {
        if (strcmp(entry->key, key) == 0) {
            entry->value = value;
            return 1;
        }
        entry = entry->next;
    }
    entry = malloc(sizeof(hash_entry_t));
    entry->key = key;
    entry->value = value;
    entry->next = ht->table[i];
    ht->table[i] = entry;
    ht->count++;
    return 1;
}

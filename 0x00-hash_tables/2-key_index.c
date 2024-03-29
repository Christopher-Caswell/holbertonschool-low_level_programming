#include "hash_tables.h"

/**
* key_index - return the index of a key in a hash table
* @key: the key to look for
* @size: the size of the hash table
*
* Return: the index of the key in the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

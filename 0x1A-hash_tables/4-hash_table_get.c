#include "hash_tables.h"

/**
* hash_table_get - Function to get value associted with key
*
* @ht: Hash table
* @key: Key of specific node in the hash table
*
* Return: Value retrieved from hash table
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int x = 0;
hash_node_t *ptr;

if (ht == NULL || key == NULL)
return (NULL);

for (x = 0; x < ht->size; x++)
{
if (ht->array[x])
{
for (ptr = ht->array[x]; ptr; ptr = ptr->next)
{
if (!strcmp(ptr->key, key))
return (ptr->value);
}
}
}
return (NULL);
}


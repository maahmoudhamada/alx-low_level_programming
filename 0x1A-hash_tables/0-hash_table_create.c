#include "hash_tables.h"

/**
* hash_table_create - Function to create hash table
*
* @size: Size of hash table
*
* Return: Newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
unsigned long int i = 0;

table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);

table->size = size;
table->array = malloc(size * sizeof(hash_node_t *));
if (table->array == NULL)
{
free(table);
return (NULL);
}
for (i = 0; i < table->size; i++)
table->array[i] = NULL;

return (table);
}

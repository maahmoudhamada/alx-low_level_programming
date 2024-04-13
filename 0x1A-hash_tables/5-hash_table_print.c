#include "hash_tables.h"

/**
* hash_table_print - Function to print hashtable
*
* @ht: Hashtable
*
* Return: Void
*/

void hash_table_print(const hash_table_t *ht)
{
unsigned long int x = 0;
hash_node_t *ptr;
int flag = 0;

if (ht == NULL)
return;

printf("{");
for (x = 0; x < ht->size; x++)
{
if (ht->array[x])
{
for (ptr = ht->array[x]; ptr; ptr = ptr->next)
{
if (flag)
printf(", ");
printf("'%s': '%s'", ptr->key, ptr->value);
flag = 1;
}
}
}
printf("}\n");
}

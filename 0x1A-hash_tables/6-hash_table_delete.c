#include "hash_tables.h"

/**
* freeNode - Function to free node in linked list
*
* @node: Node of linked list of type hash_node_t
*
* Return: Void
*/

void freeNode(hash_node_t *node)
{
free(node->key);
free(node->value);
free(node);
}

/**
* freeList - Function to free list of type hash_node_t
*
* @head: Head of linked list of type hash_node_t
*
* Return: Void
*/
void freeList(hash_node_t *head)
{
hash_node_t *ptr;

while (head)
{
ptr = head;
head = head->next;
freeNode(ptr);
}
}

/**
* hash_table_delete - Function that delets a hashtable (free)
*
* @ht: Hashtable
*
* Return: Void
*/

void hash_table_delete(hash_table_t *ht)
{
unsigned long int x = 0;

for (x = 0; x < ht->size; x++)
{
if (ht->array[x])
freeList(ht->array[x]);
}
free(ht->array);
free(ht);
}


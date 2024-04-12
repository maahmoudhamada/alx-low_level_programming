#include "hash_tables.h"

/**
 * hashLen - Function to get hash table length
 *
 * @ht: Hash table
 *
 * Return: Length of hash table (integer)
 */
unsigned long int hashLen(hash_table_t *ht)
{
unsigned long int count = 0, i = 0;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i])
count++;
}
return (count);
}

/**
 * createNode - Function that creats node of list
 *
 * @key: Key of node
 * @value: Value of node
 *
 * Return: Newly created node
 */

hash_node_t *createNode(const char *key, const char *value)
{
hash_node_t *new;

new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (NULL);
new->key = strdup(key);
new->value = strdup(value);
new->next = NULL;
return (new);
}

/**
* changeValue - Function to change value of node if its already exists
*
* @head: Head of the bucket list
* @key: Key of node
* @value: Value of node
*
* Return: One (1) on success, Zero (0) otherwise
*/

int changeValue(hash_node_t **head, const char *key, const char *value)
{
hash_node_t *ptr;

for (ptr = *head; ptr; ptr = ptr->next)
{
if (!strcmp(ptr->key, key))
{
free(ptr->value);
ptr->value = strdup(value);
return (1);
}
}
return (0);
}

/**
  * hash_table_set - Fucntion that set items in hash table
*
* @ht: Hash table
* @key: Key of current node in the hash table
* @value: Value of current node in the hash table
*
* Return: One (1) on success, Zero (0) otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int hashCode = 0;
hash_node_t *currNode, *newNode;

if (key == NULL || value == NULL || !strcmp(key, ""))
return (0);

hashCode = key_index((const unsigned char *) key, ht->size);

currNode = ht->array[hashCode];

if (currNode == NULL)
{
if (hashLen(ht) == ht->size)
return (0);

else
ht->array[hashCode] = createNode(key, value);
}
else
{
if (changeValue(&currNode, key, value))
return (1);
else
{
newNode = createNode(key, value);
newNode->next = ht->array[hashCode];
ht->array[hashCode] = newNode;
}
}

return (1);
}

#include "hash_tables.h"

/**
* key_index - Function to compute hashCode within size range
*
* @key: Key to retrive hashCode
* @size: Size of hash table
*
* Return: Index in hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = 0;

hash = hash_djb2(key);

return (hash % size);
}


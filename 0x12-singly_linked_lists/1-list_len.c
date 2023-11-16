#include "lists.h"

/**
* list_len - Function that returns number of elements in linked list
*
* @h: constant pointer to struct list_t
*
* Return: Number of elements
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
const list_t *traverse;

traverse = h;

for (count = 0; traverse != NULL; count++)
traverse = traverse->next;

return (count);
}


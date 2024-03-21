#include "lists.h"

/**
* dlistint_len - Function to get length of doubly linked list
*
* @h: Head of doubly linked list
*
* Return: Length of list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t len = 0;

for (len = 0, ptr = h; ptr; ptr = ptr->next, len++)
;
return (len);
}

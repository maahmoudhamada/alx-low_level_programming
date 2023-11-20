#include "lists.h"

/**
* listint_len - Function that gets length of linked list
*
* @h: Head of linked list points to first node
*
* Return: Number of node(s)
*/

size_t listint_len(const listint_t *h)
{
size_t len = 0;
const listint_t *ptr;

ptr = h;

for (len = 0; ptr != NULL; len++, ptr = ptr->next)
;
return (len);

}


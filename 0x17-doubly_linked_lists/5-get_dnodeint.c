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

/**
* get_dnodeint_at_index - Function to get a specific node
*
* @head: Head of doubly linked list
* @index: Index of required node
*
* Return: Required node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
size_t len = 0;
dlistint_t *out;

len = dlistint_len(head);

if (index >= len)
return (NULL);

for (out = head, i = 0; i < index; i++, out = out->next)
;
return (out);
}


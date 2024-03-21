#include "lists.h"

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


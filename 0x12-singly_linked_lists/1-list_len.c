#include "lists.h"

/**
* list_len - Function count number of node(s) in linked list
*
* @h: Head of list points to first nodes
*
* Return: Number of node(s)
*/
size_t list_len(const list_t *h)
{
size_t len = 0;
const list_t *tra;

tra = h;

while (tra != NULL)
{
len++;
tra = tra->next;
}
return (len);
}


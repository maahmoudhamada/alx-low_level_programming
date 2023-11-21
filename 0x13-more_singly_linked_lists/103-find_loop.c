#include "lists.h"
#include <stdlib.h>

/**
* find_listint_loop - Function that detetcts a loop in a linked list
*
* @head: Head of linked list that points to first node
*
* Return: Address of a node
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *ptr, *last;

if (head == NULL)
return (NULL);
for (last = head->next; last != NULL; last = last->next)
{
if (last == last->next)
return (last);
for (ptr = head; ptr != last; ptr = ptr->next)
if (ptr == last->next)
return (last->next);
}
return (NULL);
}


#include "lists.h"

/**
* get_nodeint_at_index - Function that get a node through its index
*
* @head: Head of linked list that points to first node
* @index: Index of node to find
*
* Return: The founded node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *ptr;

if (head == NULL)
return (NULL);
ptr = head;
while (ptr != NULL)
{
if (i == index)
return (ptr);

ptr = ptr->next;
i++;
}
return (NULL);
}


#include "lists.h"

/**
* add_nodeint_end - Function adds node to list in queue method(FIFO)
*
* @head: Head of list points to first node
* @n: Data to be inserted in node
*
* Return: Address of added node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *tra;

ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

if (*head == NULL)
{
*head = ptr;
ptr->n = n;
ptr->next = NULL;
}

tra = *head;
while (tra->next != NULL)
tra = tra->next;

tra->next = ptr;
ptr->n = n;
ptr->next = NULL;

return (ptr);
}


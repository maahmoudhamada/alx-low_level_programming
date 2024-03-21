#include "lists.h"

/**
* add_dnodeint_end - Function to add node at end of doubly list
*
* @head: Head of doubly linked list
* @n: Data of node
*
* Return: Node of type dlistint_t
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *ptr;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
}
else
{
for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
;
ptr->next = new;
new->prev = ptr;
}

return (new);
}


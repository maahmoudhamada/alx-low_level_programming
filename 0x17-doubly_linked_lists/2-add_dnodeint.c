#include "lists.h"

/**
* add_dnodeint - Function to add node at start of doubly list
*
* @head: Head of doubly linked list
* @n: Data of node
*
* Return: Node of type dlistint_t
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = NULL;

if (*head == NULL)
new->next = NULL;

else
{
new->next = *head;
(*head)->prev = new;
}

*head = new;
return (new);
}


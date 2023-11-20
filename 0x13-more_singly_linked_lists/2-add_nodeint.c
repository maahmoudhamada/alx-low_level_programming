#include "lists.h"

/**
* add_nodeint - Function add node in stack method (LIFO)
*
* @head: Head of linked list points to first node
* @n: Data to be inserted in node
*
* Return: Address of added node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;

ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

if (*head == NULL)
{
*head = ptr;
ptr->n = n;
ptr->next = NULL;
}
else
{
ptr->n = n;
ptr->next = *head;
*head = ptr;
}
return (ptr);
}


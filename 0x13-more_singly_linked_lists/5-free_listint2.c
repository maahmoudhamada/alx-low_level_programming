#include "lists.h"

/**
* free_listint2 - Function that frees linked list and set head to null
*
* @head: Head of list points to first node
*
* Return: void
*/

void free_listint2(listint_t **head)
{
listint_t *ptr;

if (head == NULL || *head == NULL)
return;

while (*head != NULL)
{
ptr = *head;
*head = (*head)->next;
free(ptr);
}
*head = NULL;
}


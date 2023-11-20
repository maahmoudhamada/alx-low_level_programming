#include "lists.h"

/**
* pop_listint - Function that delete head and return deleted data
*
* @head: Head of linked list that points to first node
*
* Return: Deleted node data (Integer)
*/

int pop_listint(listint_t **head)
{
int num = 0;
listint_t *ptr;

if (*head == NULL)
return (0);

ptr = *head;
num = (*head)->n;
*head = (*head)->next;
free(ptr);
return (num);
}


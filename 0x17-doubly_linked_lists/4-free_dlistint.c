#include "lists.h"

/**
* free_dlistint - Function to free doubly linked list
*
* @head: Head of doubly linked list
*
* Return: Void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *freed;

while (head)
{
freed = head;
head = head->next;
free(freed);
freed = head;
}
}

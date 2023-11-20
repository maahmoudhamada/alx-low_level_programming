#include "lists.h"

/**
* free_listint - Function that frees linked list
*
* @head: Head of list points to first node
*
* Return: void
*/

void free_listint(listint_t *head)
{
listint_t *ptr;

while (head != NULL)
{
ptr = head;
head = head->next;
free(ptr);
}
}


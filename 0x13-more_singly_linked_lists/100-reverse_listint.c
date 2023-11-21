#include "lists.h"
/**
* reverse_listint - Function that reverse linked list
*
* @head: Head of linked list that points to first node
*
* Return: Pointer to first node in the reversed linked list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *back, *now;
now = *head;
back = NULL;

while (now != NULL)
{
*head = now->next;
now->next = back;
back = now;
now = *head;
}
*head = back;
return (*head);
}


#include "lists.h"
/**
* free_list - Function that free a linked list
*
* @head: Head of list to be freed
*
* Return: void
*/

void free_list(list_t *head)
{
list_t *temp;
temp = head;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}


#include "lists.h"
/**
* free_list - Function to free linked list
*
* @head: Head of linked list points to first node
*
* Return: Void
*/
void free_list(list_t *head)
{
list_t *temp;
temp = head;
while (temp != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}


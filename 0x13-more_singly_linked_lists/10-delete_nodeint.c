#include "lists.h"

/**
* list_len - Function that gets number of node(s) in linked list
*
* @head: Head of linked list that points to first node
*
* Return: Number of nodes
*/

unsigned int list_len(listint_t *head)
{
listint_t *tmp;
int len = 0;

tmp = head;
while (tmp != NULL)
{
tmp = tmp->next;
len++;
}
return (len);
}

/**
* delete_nodeint_at_index - Function that delete a node in linked list
*
* @head: Head of linked list points to first node
* @index: Position of deleted node
*
* Return: One (1) if success -1 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *link, *del;
unsigned int len = 0, i = 0;

len = list_len(*head);
if (head == NULL)
return (-1);
if (*head == NULL || index > (len - 1))
return (-1);
del = *head;

if (index == 0)
{
*head = (*head)->next;
free(del);
return (1);
}

while (index != 0 && i < index)
{
if (i + 1 == index)
link = del;

del = del->next;
i++;
}
if (link != NULL && del != NULL)
{
link->next = del->next;
free(del);
return (1);
}

return (-1);
}


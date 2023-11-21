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
* insert_nodeint_at_index - Function that insert new node in a certain position
*
* @head: Head of linked list points to first node
* @idx: Position that new node be within
* @n: Data to be record inside new node
*
* Return: Address of the new node
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *tmp;
unsigned int i = 0, len = 0;

len = list_len(*head);
if ((head == NULL || *head == NULL) || idx > len)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
tmp = *head;
new->n = n;
if (idx == 0)
{
new->next = tmp;
*head = new;
return (new);
}
while (i < idx - 1 && idx != 0)
{
tmp = tmp->next;
i++;
}
if (tmp == NULL)
return (NULL);
new->next = tmp->next;
tmp->next = new;
return (new);
}


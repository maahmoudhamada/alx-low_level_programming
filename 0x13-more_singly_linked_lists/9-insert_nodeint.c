#include "lists.h"

/**
* list_len - Function that gets number of node(s) in linked list
*
* @h: Head of linked list that points to first node
*
* Return: Number of nodes
*/

unsigned int list_len(const listint_t *h)
{
size_t len = 0;
const listint_t *ptr;

ptr = h;

for (len = 0; ptr != NULL; len++, ptr = ptr->next)
;
return (len);

}

/**
* insert_nodeint_at_index - Function that insert a node in specific pos
*
* @head: Head of linked list that points to first node
* @idx: Index to insert node within
* @n: Data;
*
* Return: Address of the inserted node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int len, i = 0;
listint_t *pre, *pst, *ptr;
len = list_len(*head);

if (*head == NULL || head == NULL || idx > len)
return (NULL);
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

if (idx == 0)
ptr->next = *head, *head = ptr;
else if (idx == len)
{
for (pre = *head; pre->next != NULL; pre = pre->next)
;
pre->next = ptr, ptr->next = NULL;
}
else
{
for (i = 0, pst = *head; pst != NULL; pst = pst->next, i++)
{
if (i + 1 == idx)
pre = pst;
else if (i == idx)
break;
}
pre->next = ptr, ptr->next = pst;
}
ptr->n = n;
return (ptr);
}


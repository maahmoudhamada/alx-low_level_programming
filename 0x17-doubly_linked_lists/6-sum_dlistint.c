#include "lists.h"

/**
* dlistint_len - Function to get length of doubly linked list
*
* @h: Head of doubly linked list
*
* Return: Length of list
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *ptr;
size_t len = 0;

for (len = 0, ptr = h; ptr; ptr = ptr->next, len++)
;
return (len);
}

/**
* sum_dlistint - Function to get sum of all node data
*
* @head: Head of doubly linked list
*
* Return: Sum of all nodes
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *ptr;

if (dlistint_len(head) == 0)
return (0);

for (ptr = head; ptr; ptr = ptr->next)
sum += ptr->n;
return (sum);
}


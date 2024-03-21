#include "lists.h"

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


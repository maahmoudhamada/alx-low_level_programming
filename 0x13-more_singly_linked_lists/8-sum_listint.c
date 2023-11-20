#include "lists.h"

/**
* sum_listint - Function that return sum of data in a linked list
*
* @head: Head of linked list that points to first node
*
* Return: Sum of all data (Integer)
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *ptr;

if (head == NULL)
return (0);

ptr = head;

while (ptr != NULL)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}


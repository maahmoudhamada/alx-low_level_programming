#include "lists.h"

/**
* print_dlistint - Function to print a doubly linked list
*
* @h: Head of doubly linked list
*
* Return: Number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;
const dlistint_t *ptr;

for (i = 0, ptr = h; ptr; ptr = ptr->next, i++)
printf("%d\n", ptr->n);
return (i);
}


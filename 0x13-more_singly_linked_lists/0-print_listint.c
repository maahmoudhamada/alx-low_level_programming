#include "lists.h"

/**
* print_listint - Function that prints a linked list
*
* @h: Head of list points to first node
*
* Return: Number of node(s) printed
*/

size_t print_listint(const listint_t *h)
{
size_t num;
const listint_t *ptr;

ptr = h;
num = 0;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
num++;
}

return (num);
}


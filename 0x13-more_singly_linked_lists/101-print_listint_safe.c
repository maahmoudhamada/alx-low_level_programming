#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* find_listint_loop_pl - Funcation that finds a loop in a linked list
*
* @head: Head of linked list that points to first node
*
* Return: address of node
*/
listint_t *find_listint_loop_pl(listint_t *head)
{
listint_t *ptr, *last;

if (head == NULL)
return (NULL);

for (last = head->next; last != NULL; last = last->next)
{
if (last == last->next)
return (last);
for (ptr = head; ptr != last; ptr = ptr->next)
if (ptr == last->next)
return (last->next);
}
return (NULL);
}

/**
* print_listint_safe - Function that prints a linked list
*
* @head: Head of linked list that points to first node
*
* Return: Number of nodes printed
*/
size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
int lp;
listint_t *lpnd;
lpnd = find_listint_loop_pl((listint_t *)head);

for (len = 0, lp = 1; (head != lpnd || lp) && head != NULL; len++)
{
printf("[%p] %d\n", (void *)head, head->n);
if (head == lpnd)
lp = 0;
head = head->next;
}

if (lpnd != NULL)
printf("-> [%p] %d\n", (void *)head, head->n);
return (len);
exit(98);
}


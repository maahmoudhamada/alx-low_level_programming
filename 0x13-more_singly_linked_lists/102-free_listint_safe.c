#include "lists.h"
#include <stdlib.h>

/**
* find_listint_loop_fl - Function that finds a loop in a linked list
*
* @head: Head of linked list that points to first node
*
* Return: address of node
*/
listint_t *find_listint_loop_fl(listint_t *head)
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
* free_listint_safe -Function that  frees a linked list  even if it has a loop
*
* @h: Head of linked list that points to first node
*
* Return: number of nodes freed
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *next, *lpnd;
size_t len;
int lp = 1;

if (h == NULL || *h == NULL)
return (0);

lpnd = find_listint_loop_fl(*h);
for (len = 0; (*h != lpnd || lp) && *h != NULL; *h = next)
{
len++;
next = (*h)->next;
if (*h == lpnd && lp)
{
if (lpnd == lpnd->next)
{
free(*h);
break;
}
len++;
next = next->next;
free((*h)->next);
lp = 0;
}
free(*h);
}
*h = NULL;
return (len);
}


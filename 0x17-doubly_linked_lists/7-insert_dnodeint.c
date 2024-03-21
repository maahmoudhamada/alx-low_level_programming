#include "lists.h"

/**
 * idx_zero - Function to add node on both suitation idx zero
 *
 * @h: Head of doubly linked list
 * @node: New node to insert
 *
 * Return: Void
 */

void idx_zero(dlistint_t **h, dlistint_t **node)
{
if (*h == NULL)
{
(*node)->next = (*node)->prev = NULL;
*h = *node;
}

else
{
(*node)->prev = (*h)->prev;
(*node)->next = *h;
(*h)->prev = *node;
*h = *node;
}
}

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
* insert_dnodeint_at_index - Function to insert node into a specific index
*
* @h: Head of doubly linked list
* @idx: Index to insert new node
* @n: Data of new node
*
* Return: New node address / NULL on failure
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *before, *after, *new;
size_t len = dlistint_len(*h);

if (*h == NULL || idx >= (unsigned int)len)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;

if (idx == 0)
idx_zero(h, &new);

else if (idx == (unsigned int)len)
{
for (before = *h, i = 0; i < idx - 1; i++, before = before->next)
;
new->next = before->next, before->next = new, new->prev = before;
}
else
{

for (after = *h, i = 0; i < idx; i++, after = after->next)
;
before = after->prev, new->next = after, after->prev = new;
new->prev = before, before->next = new;
}
return (new);
}


#include "lists.h"

/**
* print_list - Function prints a linked list
*
* @h: Head of list points to the first node
*
* Return: Number of node(s) printed
*/

size_t print_list(const list_t *h)
{
const list_t *tra;
size_t len;

tra = h;

for (len = 0; tra != NULL; len++)
{
if (tra->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", tra->len, tra->str);

tra = tra->next;
}
return (len);
}


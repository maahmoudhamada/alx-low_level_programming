#include "lists.h"

/**
* print_list - Function to print singly list
*
* @h: Pointer of type list_t
*
* Return: Number of nodes (elements) printed
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *traverse;

traverse = h;

for (count = 0; traverse != NULL; count++)
{
if (traverse->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", traverse->len, traverse->str);

traverse = traverse->next;
}
return (count);
}


#include "lists.h"

/**
* _strlen - Function gets the length of a string
*
* @s: String to be measured
*
* Return: Length of string (Integer)
*/

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
/**
* add_node_end - Function that add node in queue method
*
* @head: Head of linked list points to first node
* @str: String to be dupliacted
*
* Return: Address of new node (element)
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr, *t;
char *tmp;
int len = 0;

ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);
tmp = strdup(str);
if (tmp == NULL)
{
free(ptr);
return (NULL);
}
len = _strlen(tmp);
if (*head == NULL)
{
*head = ptr;
ptr->str = tmp;
ptr->len = len;
ptr->next = NULL;
}
else
{
for (t = *head; t->next != NULL; t = t->next)
;
t->next = ptr;
ptr->str = tmp;
ptr->len = len;
ptr->next = NULL;
}
return (ptr);
}


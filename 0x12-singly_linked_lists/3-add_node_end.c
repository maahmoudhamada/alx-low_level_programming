#include "lists.h"
/**
* _strlen - Function that gets the length of a String
*
* @s: String to get it length
*
* Return: Length of a String (integer)
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
/**
* add_node_end - Function that add an element in queue
*
* @head: Head of list
* @str: String to be filled
*
* Return: Address of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *ptr, *traverse;
int len;
char *tmp;

ptr = (list_t *)malloc(sizeof(list_t));
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
return (ptr);
}
traverse = *head;
while (traverse->next != NULL)
traverse = traverse->next;
traverse->next = ptr;
ptr->str = tmp;
ptr->len = len;
ptr->next = NULL;
return (ptr);
}


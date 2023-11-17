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
* add_node - Function add node in stack method
*
* @head: Head of linked list points to first add_node
* @str: String to be duplicated
*
* Return: Address of the new node (element)
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;
int len = 0;
char *tmp;

ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);

if (*head == NULL)
ptr->next = NULL;

tmp = strdup(str);
if (tmp == NULL)
{
free(ptr);
return (NULL);
}

len = _strlen(tmp);
ptr->str = tmp;
ptr->len = len;
ptr->next = *head;
*head = ptr;
return (ptr);
}


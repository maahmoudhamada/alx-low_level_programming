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
* add_node - Function that new node in a list
*
* @head: Top pointer of type list_t
* @str: String to be duplicated
*
* Return: Pointer to the new added element
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *ptr;
char *tmp;
int len;

ptr = (list_t *)malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);

tmp = strdup(str);
if (tmp == NULL)
{
free(ptr);
return (NULL);
}
ptr->str = tmp;
len = _strlen (tmp);
ptr->len = len;
ptr->next = *head;
*head = ptr;
return (ptr);
}


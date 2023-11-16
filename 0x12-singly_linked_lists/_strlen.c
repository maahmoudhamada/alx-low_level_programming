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

#include "main.h"

/**
 * _strlen - Function measure length of string
 *
 * @s: String to be measured
 *
 * Return: Length (Integer)
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
 * _strdup - Function that copies a string into memory area using malloc
 *
 * @str: String to be copied
 *
 * Return: Pointer to char
*/
char *_strdup(char *str)
{
unsigned int i = 0, len = 0;
char *ptr;

if (str == NULL)
return (NULL);

len = _strlen(str);

ptr = malloc((len + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < len; i++)
ptr[i] = str[i];
ptr[i] = '\0';
return (ptr);
}
}

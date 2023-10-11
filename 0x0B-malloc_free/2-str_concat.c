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
 * str_concat - Function that concat 2 string using malloc
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to char
*/
char *str_concat(char *s1, char *s2)
{
char *str1, *str2, *ptr;
unsigned int i = 0, j = 0, len1, len2, lenf;

str1 = s1 ? s1 : "";
str2 = s2 ? s2 : "";

len1 = _strlen(str1);
len2 = _strlen(str2);
lenf = len1 + len2;

ptr = malloc((lenf + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < len1; i++)
ptr[i] = str1[i];
for (j = 0; j < len2; j++, len1++)
ptr[len1] = str2[j];
ptr[len1] = '\0';
return (ptr);
}
}

#include "main.h"
/**
 * _strchr - Function that search a char in a string
 *
 * @s: String to search within
 * @c: Char to be searched
 *
 * Return: pointer point to first occu
 */
char *_strchr(char *s, char c)
{
int len = 0, i = 0;

len = _strlen(s);

for (i = 0; i <= len; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}

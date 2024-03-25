#include "main.h"

/**
 * _strpbrk - Function searches a string of any set of byte(s)
 *
 * @s: String searching withing
 * @accept: String to be searched
 *
 * Return: Pointer to char
 *
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
if (s[i] == accept[j])
return (s + i);
}
return ('\0');
}

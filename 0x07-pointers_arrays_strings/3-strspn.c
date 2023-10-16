#include "main.h"
/**
 * _strspn - Function that calc. length of prefix substring
 *
 * @s: Segment
 * @accept: byte(s) to be searched
 *
 * Return: Length (Unsigned integer)
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0, count = 0;

for (i = 0; accept[i] != '\0'; i++)
{
for (j = 0; s[j] != ' ' && s[j] != '\0'; j++)
if (accept[i] == s[j])
count++;
}
return (count);
}

/**
 * _strcmp - Function to compare to 2 String together
 *
 * @s1: First String
 * @s2: Second String
 *
 * Return: Integer
*/
#include "main.h"

int _strcmp(char *s1, char *s2)
{
int i, cmp;
i = cmp = 0;

for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
{
cmp = *(s1 + i) -*(s2 + i);
if (cmp < 0 || cmp > 0)
break;
else
continue;
}
return (cmp);
}

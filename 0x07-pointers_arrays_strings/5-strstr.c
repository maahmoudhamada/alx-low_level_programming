#include "main.h"

/**
 * _strstr - Function that locate a substring
 *
 * @haystack: Main String
 * @needle: Substring
 *
 * Return: Pointer to char
 */

char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;

while (haystack[a])
{
while (needle[b])
{
if (haystack[a + b] != needle[b])
{
break;
}

b++;
}

if (needle[b] == '\0')
{
return (haystack + a);
}

a++;
}

return ('\0');
}

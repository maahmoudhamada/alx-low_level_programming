#include "main.h"
/**
 * _strlen - Function that return length of a string
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
 * _strncat - Function to concat n of bytes from string to another
 *
 * @dest: Destination string to be returned
 * @src: Source String
 * @n: Number of bytes
 *
 * Return: Pointer to char
 */

char *_strncat(char *dest, char *src, int n)
{
int i, len1, len2;
len1 = len2 = i = 0;

len1 = _strlen(dest);
len2 = _strlen(src);

if (n >= len2)
n = len2;
for (i = 0; i < n; i++, len1++)
dest[len1] = src[i];
dest[len1] = '\0';
return (dest);
}

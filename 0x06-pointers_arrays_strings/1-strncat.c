/**
 * _strncat - Function to concat n of bytes from string to another
 *
 * @dest: Destination string to be returned
 * @src: Source String
 * @n: Number of bytes
 *
 * Return: Pointer to char
*/
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = j = 0;
while (*(dest + i) != '\0')
{
i++;
}

for (j = 0; j < n && *(src + j) != '\0'; j++)
*(dest + i++) = *(src + j);
*(dest + i) = '\0';
return (dest);
}

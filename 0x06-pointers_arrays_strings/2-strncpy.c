/**
 * _strncpy - Function to copy number of bytes from a string to another
 *
 * @dest: Destination string to be returned
 * @src: Source string to be copied from
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to Character
*/
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

for (i = 0; i < n && *(src + i) != '\0'; i++)
*(dest + i) = *(src + i);

for (i = i; i < n; i++)
*(dest + i) = '\0';
return (dest);
}

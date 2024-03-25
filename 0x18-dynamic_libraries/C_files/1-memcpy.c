#include "main.h"

/**
 * _memcpy - Function that copies a n of byte (s) from src string to dest
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Number of byte(s)
 *
 * Return: Pointer to character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}

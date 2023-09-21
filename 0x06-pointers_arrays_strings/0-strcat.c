/**
 * _strcat - Function that concat 2 string together
 *
 * @dest: Destination string to be returned
 * @src: Source string
 *
 * Return: Pointer to char
 */
#include "main.h"

char *_strcat(char *dest, char *src)
{
int i, j;

i = j = 0;

while (*(dest + i) != '\0')
{
i++;
}
for (j = 0; *(src + j) != '\0'; j++)
{
*(dest + i++) = *(src + j);
}
*(dest + i) = '\0';
return (dest);
}

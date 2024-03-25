/**
 * _strcpy - Function that copies a string to another
 *
 * @src: String to be copied
 * @dest: String to be copy within
 *
 * Return: Pointer to char
 */
#include "main.h"

char *_strcpy(char *dest, char *src)
{
int i, j, len;
i = j = len = 0;

for (i = 0; *(src + i) != '\0'; i++)
;
len = i;
for (j = 0; j < len; j++)
{
*(dest + j) = *(src + j);
}
*(dest + j) = '\0';
return (dest);
}

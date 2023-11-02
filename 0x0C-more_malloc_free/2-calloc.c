#include "main.h"

/**
 * _calloc - Function that allocates memory for an array
 *
 * @nmemb: Number of elements
 * @size: Size of elements
 *
 * Return: Void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < (size * nmemb); i++)
ptr[i] = 0;

return ((void *)ptr);
}
}

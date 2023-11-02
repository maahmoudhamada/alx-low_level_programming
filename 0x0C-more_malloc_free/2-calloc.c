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
int *tmp;
void *ptr;
unsigned int i = 0;

tmp = malloc((nmemb * size) * sizeof(int));
if (tmp == NULL)
return (NULL);
else
{
for (i = 0; i < (nmemb * size); i++)
tmp[i] = 0;
ptr = tmp;
return (ptr);
}
}

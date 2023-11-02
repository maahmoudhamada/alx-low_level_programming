#include "main.h"
/**
 * _realloc - Function that reallocates a memory block using malloc and free
 *
 * @ptr: Reserved area
 * @old_size: Old size reserved
 * @new_size: New size to be reserved
 *
 * Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *nptr;

unsigned int i = 0;

if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
else
return (nptr);
}
else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
return (ptr);
else
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
else
{
for (i = 0; i < min(new_size, old_size); i++)
*((char *)nptr + i) = *((char *)ptr + i);
free(ptr);
return (nptr);
}
}
return (NULL);
}

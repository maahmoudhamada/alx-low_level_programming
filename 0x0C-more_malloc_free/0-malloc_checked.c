#include "main.h"
/**
 * malloc_checked - Function that allocates memory ares
 *
 * @b: Size of the area
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
else
return (ptr);
}

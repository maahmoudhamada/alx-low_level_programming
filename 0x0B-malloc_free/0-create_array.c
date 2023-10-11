#include "main.h"

/**
 * create_array - Function creates an array using malloc
 *
 * @size: Size of rray
 * @c: char to fill array
 *
 * Return: Pointer to char
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *ptr;
if (size == 0)
return (NULL);

ptr = malloc(size  * sizeof(char));
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
ptr[i] = c;
}
return (ptr);
}

#include "main.h"
/**
 * array_range - Function that creates an array of integers
 *
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Array of integer
 */
int *array_range(int min, int max)
{
int i = 0, *ptr;

ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
return (NULL);
else
{
for (i = min; i <= max; i++)
ptr[i] = i;
return (ptr);
}
}

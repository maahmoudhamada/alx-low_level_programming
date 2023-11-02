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
int *ptr, r = 0, x = 0;

if (min > max)
return (NULL);
r = max - min + 1;
ptr = malloc(r *sizeof(int));

if (ptr == NULL)
return (NULL);
else
{
while (min <= max)
{
ptr[x] = min;
min++;
x++;
}
return (ptr);
}
}

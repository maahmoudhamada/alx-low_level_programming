#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 *
 * @array: Array of integer
 * @size: Size of array
 * @cmp: Pointer to function
 *
 * Return: Integer
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int (*ptr)(int);
int i = 0;

ptr = cmp;
if (ptr != NULL && array != NULL)
{
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (ptr(array[i]) == 1)
return (i);
}
}
return (-1);
}

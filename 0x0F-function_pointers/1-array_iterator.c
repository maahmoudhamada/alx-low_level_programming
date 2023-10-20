#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 *
 * @array: Array of integer
 * @size: Size of array
 * @action: Pointer to function
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
void (*ptr)(int) = action;
if (ptr != NULL)
{
if (array != NULL && size != 0)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
}

#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: Name to be printed
 * @f: Pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
void (*ptr)(char *) = f;
if (ptr != NULL)
ptr(name);
}

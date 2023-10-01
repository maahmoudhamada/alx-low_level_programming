/**
 * print_triangle - Function to print a tirangle
 *
 * @size: Size of the triangle
 *
 * Return: Void
*/
#include "main.h"
void print_triangle(int size)
{
int i, j, z;

i = j = z = 0;

if (size <= 0)
_putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
_putchar(' ');
for (z = 0; z <= i; z++)
_putchar('#');
_putchar('\n');
}
}
}

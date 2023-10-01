/**
 * print_square - Function that print a square based on size parameter
 *
 * @size: Size of square
 *
 * Return: Void
*/
#include "main.h"

void print_square(int size)
{
int i, j;

i = j = 0;

if (size <= 0)
_putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}
}
}

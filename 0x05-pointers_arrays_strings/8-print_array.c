/**
 * print_array - Function that prints n of elements of an array
 *
 * @a: Array to be printed
 * @n: Number of elemnts of the array
 *
 * Return: Void
 */
#include "main.h"

void print_array(int *a, int n)
{
int i;

i = 0;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == n - 1)
continue;
printf(", ");
}
putchar('\n');
}

/**
 * print_diagonal - Function to print a diagonal
 *
 * @n: Size of Diagonal
 *
 * Return: Void
*/
#include "main.h"

void print_diagonal(int n)
{
int i, j;

i = j = 0;

if (n <= 0)
_putchar('\n');
else
{
while (i < n)
{
for (j = 0; j < i; j++)
_putchar(' ');

_putchar('\\');
i++;
_putchar('\n');
}
}
}

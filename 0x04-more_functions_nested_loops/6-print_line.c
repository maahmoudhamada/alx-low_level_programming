/**
 * print_line - Function to print a line in a terminal
 *
 * @n: Number of symbols
 *
 * Return: Void
*/
#include "main.h"

void print_line(int n)
{
int i = 0;

if (n <= 0)
_putchar('\n');

else
{
for (i = 1; i <= n; i++)
_putchar('_');

_putchar('\n');
}
}

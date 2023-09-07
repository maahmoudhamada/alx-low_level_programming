/**
 * print_times_table - Function to print times table
 *
 * @n: parameter
 *
 * Return: Void
*/
#include "main.h"

void print_times_table(int n)
{
int i, j, mult;

i = j = mult = 0;

if ((n > 15) || (n < 0))
_putchar('\n');
else
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
mult = i *j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if ((mult < 10) && (mult >= 0) && j != 0)
{
_putchar(' ');
_putchar(' ');
_putchar((mult % 10) + '0');
}
else if (mult >= 10 && mult < 100)
{
_putchar(' ');
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
}
else if (mult >= 100 && mult < 1000)
{
_putchar((mult / 10) / 10 + '0');
_putchar((mult / 10) % 10 + '0');
_putchar((mult % 10) + '0');
}
else
{
_putchar(mult % 10 + '0');
}
}
_putchar('\n');
}
}
}

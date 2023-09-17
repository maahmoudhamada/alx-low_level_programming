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
int i, j, res;

i = j = res = 0;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');

res = i *j;
if (res <= 9)
_putchar(' ');
if (res <= 99)
_putchar(' ');

if (res >= 10 && res < 100)
_putchar(res / 10 + '0');

else if (res >= 100 && res < 1000)
{
_putchar((res / 10) / 10 + '0');
_putchar((res / 10) % 10 + '0');
}
_putchar(res % 10 + '0');
}
_putchar('\n');
}
}
}

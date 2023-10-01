/**
 * print_number - Function to print an integer
 *
 * @n: Number to be printed
 *
 * Return: Void
*/
#include "main.h"

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n *= -1;
}
if (n >= 10 && n < 100)
_putchar(n / 10 + '0');
else if (n >= 100 && n < 1000)
{
_putchar(((n / 10) / 10) + '0');
_putchar(((n / 10) % 10) + '0');
}
else if (n >= 1000)
{
_putchar(((n / 100) / 10) + '0');
_putchar(((n / 100) % 10) + '0');
_putchar(((n / 10) % 10) + '0');
}
_putchar((n % 10) + '0');
}

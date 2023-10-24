#include "main.h"

/**
 * print_number - Recursive function that prints numbers
 *
 * @n: Number to be printed
 *
 * Return: Void
 */
void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -n;
}

if (num / 10 > 0)
print_number(num / 10);

_putchar((num % 10) + '0');
}

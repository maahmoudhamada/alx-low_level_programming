/**
 * print_last_digit - Function to print the last digit of a number
 *
 * @n: Number received
 *
 * Return: Integer (last digit of a number)
*/
#include "main.h"

int print_last_digit(int n)
{
if (n < 0)
n *= -1;
_putchar((n % 10) + '0');
return (n % 10);
}

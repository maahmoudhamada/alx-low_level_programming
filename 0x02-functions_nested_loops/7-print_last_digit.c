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
int digit;
digit = n % 10;
if (digit < 0)
digit *= -1;
_putchar(digit + '0');
return (digit);
}

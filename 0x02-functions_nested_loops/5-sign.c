/**
 * print_sign - Function to check the sign of received number
 *
 * @n: Number received
 *
 * Return: Integer
*/
#include "main.h"

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

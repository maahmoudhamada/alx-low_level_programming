#include "main.h"

/**
* print - Function to print binary representation using recursion
*
* @n: Number to be printed
*
* Return: void
*/

void print(unsigned long int n)
{

if (n == 0)
return;

else
{
print(n >> 1);
if ((n & 1) == 1)
_putchar('1');
else
_putchar('0');
}
}

/**
* print_binary - Function to print binary representation using recursion
*
* @n: Number to be printed
*
* Return: void
*/

void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
else
print(n);

}


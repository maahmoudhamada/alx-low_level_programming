/**
 * print_numbers - Function to print all possible digits
 *
 * Return: Void
*/
#include "main.h"

void print_numbers(void)
{
int i = 0;

while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}

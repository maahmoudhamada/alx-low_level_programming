/**
 * print_most_numbers - Function to print all digit expect 2 & 4
 *
 * Return: Void
*/
#include "main.h"

void print_most_numbers(void)
{
int i = 0;

for (i = 0; i <= 9; i++)
{
if (i == 4 || i == 2)
continue;
_putchar(i + '0');
}
_putchar('\n');
}

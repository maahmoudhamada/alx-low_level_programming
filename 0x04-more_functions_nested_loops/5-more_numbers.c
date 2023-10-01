/**
 * more_numbers - Function to print base 16 in 10 lines
 *
 * Return: Void
*/
#include "main.h"

void more_numbers(void)
{
int i, j;

i = 1;

while (i <= 10)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
i++;
_putchar('\n');
}
}

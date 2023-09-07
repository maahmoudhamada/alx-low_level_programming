/**
 * times_table - Function that prints 9 times table
 *
 * Return: Void
*/
#include "main.h"

void times_table(void)
{
int mult, i, j;

mult = i = j = 0;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
mult = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if ((mult < 10) && (mult >= 0) && j != 0)
{
_putchar(' ');
_putchar((mult % 10) + '0');
}
else if (mult >= 10)
{
_putchar((mult / 10) + '0');
_putchar((mult % 10) + '0');
}
else

_putchar((mult % 10) + '0');
}
_putchar('\n');
}
}

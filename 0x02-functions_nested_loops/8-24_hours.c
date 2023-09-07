/**
 * jack_bauer - function to print hour and min of the day
 *
 * Return: void
*/

#include "main.h"
void jack_bauer(void)
{
int i, j;
i = j = 0;

for (i = 0; i < 24; i++)
{
for (j = 0; j < 60; j++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
}
}
}

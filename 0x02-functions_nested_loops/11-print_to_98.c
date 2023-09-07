/**
 * print_to_98 - Function to print numbers and stop when reach 98
 *
 * @n: Number to start from
 *
 * Return: Void
*/
#include <stdio.h>

void print_to_98(int n)
{
int i = 0;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i == 98)
continue;
printf(", ");
}
putchar('\n');
}
else
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i == 98)
continue;
printf(", ");
}
putchar('\n');
}
}

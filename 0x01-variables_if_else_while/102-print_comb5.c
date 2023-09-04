/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
#include <stdio.h>

int main(void)
{
int n1, n2;

n1 = n2 = 0;

for (n1 = 0; n1 < 99; n1++)
{
for (n2 = n1 + 1; n2 < 100; n2++)
{
putchar((n1 / 10) + '0');
putchar((n1 % 10) + '0');
putchar(' ');
putchar((n2 / 10) + '0');
putchar((n2 % 10) + '0');
if (n1 == 98 && n2 == 99)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

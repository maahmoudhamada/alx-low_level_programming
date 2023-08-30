#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
int i, j, z, k;
i = j = z = k = 0;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 9; j++)
{
for (z = i; z < 10; z++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(z + '0');
putchar(k + '0');
if (i == 9 && j == 8)
break;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

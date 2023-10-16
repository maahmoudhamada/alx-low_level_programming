#include "main.h"

/**
 * print_diagsums - Function prints sum of two diag of square matrix
 *
 * @a: Matrix
 * @size: Size of diag.
 *
 * Return: Void
*/
void print_diagsums(int *a, int size)
{
int i, j, z, sum1, sum2;
i = j = z = sum1 = sum2 = 0;

z = size - 1;
for (i = 0; i < size; i++)
{
for (j = i; j <= i; j++)
{
sum1 += *(a + (i *size + j));
while (z >= 0)
{
sum2 += *(a + (z *size + j));
z--;
break;
}
}
}
printf("%d, %d\n", sum1, sum2);
}

#include "main.h"
/**
 * reverse_array - Function to reverse an array of integer
 *
 * @a: Array to be reversed
 * @n: Number of elements in the array
 *
 * Return: Void
*/

void reverse_array(int *a, int n)
{
int i, tmp, j;

j = n - 1;

for (i = 0; i < n; i++, n--, j--)
{
tmp = *(a + i);
*(a + i) = *(a + j);
*(a + j) = tmp;
}
}

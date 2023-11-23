#include "main.h"

/**
* bi_container - Function that allocate memory for 64-bit container
*
* Return: Void
*/

int *bi_container(void)
{
int *tmp, i = 0;

tmp = malloc(64 * sizeof(int));

for (i = 0; i < 64; i++)
tmp [i] = 0;

return (tmp);
}

/**
* _pow - Function that get power (a raised to the power b)
*
* @a: The base number
* @b: The exponent number
*
* Return: Result(integer)
*/

int _pow(int a, int b)
{
if (b == 0)
return (1);

else
return (a * _pow(a, b - 1));
}

/**
* clear_bit - Function that set a bit from 1 to 0 in a certain index
*
* @n: Number to be setting
* @index: Index of bit to be changed to 1
*
* Return: One (1) if success -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int res, t;
unsigned int i, j, expo, or, and;
int *rec;

t = *n, res = i = j = expo = or = and = 0;
if (index > 64)
return (-1);

rec = bi_container();
while (j < 64)
{
and = t & 1;
if (j == index && and)
{
or = and ^ 1;
rec[j] = or;
}
else
rec[j] = and;
j++;
t = t >> 1;
}

for (expo = 0, i = 0; i < 64; i++, expo++)
{
res += rec[i] * _pow(2, expo);
}
*n = res;
free(rec);
return (1);
}

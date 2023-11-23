#include "main.h"

/**
* flip_bits - Function that flips bits and return needed flips
*
* @n: First number
* @m: Second number
*
* Return: Number of flips needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int res;
unsigned int count = 0;
unsigned long int i;

res = n ^ m;

for (i = 0; i < sizeof(unsigned long int) * 8; i++)
{
if ((res >> i) & 1)
count++;
}

return (count);
}


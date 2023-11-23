#include <stdio.h>

/**
* bit_len - Function that gets number length using bit manu
*
* @n: Number to be measured
*
* Return: Length (integer);
*/

int bit_len(int n)
{
int len = 0;
while (n > 0)
{
len++;
n = n >> 1;
}
return (len);
}

/**
* flip_bits - Function returns number needed to flip to get from one to another
*
* @n: First Number (from)
* @m: Second Number (to)
*
* Return: Number of flips
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int len1, len2, lenf, i;
unsigned int ret;

len1 = len2 = lenf = i = ret = 0;

len1 = bit_len(n);
len2 = bit_len(m);
lenf = (len1 > len2) ? (len1) : len2;


while (i < lenf)
{
ret += (n & 1) ^ (m & 1);
i++;
n = n >> 1;
m = m >> 1;
}

return (ret);
}


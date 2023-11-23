#include "main.h"

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
* binary_to_uint - Function to convert binary representation to unsigned int
*
* @b: Number in binary representation
*
* Return: Unsigned int (binary to unsigned int)
*/

unsigned int binary_to_uint(const char *b)
{
int expo, i;
unsigned int r;
expo = i = r = 0;

if (b == NULL)
return (0);

for (expo = 0; b[expo] != '\0'; expo++)
;
expo--;

while (expo >= 0)
{
if (b[i] < '0' || b[i] > '1')
return (0);
r += (b[i] - '0') * _pow(2, expo);
i++;
expo--;
}
return (r);
}

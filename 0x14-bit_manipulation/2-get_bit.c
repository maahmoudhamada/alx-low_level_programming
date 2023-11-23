#include "main.h"

/**
* get_bit - Function that returns value of bit
*
* @n: Number to be searched within
* @index: Index of bit
*
* Return: Value of given bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i = 0;
int hold;

if (index > 32)
return (-1);

while (i <= index)
{
hold = n & 1;
n = n >> 1;
i++;
}
return (hold);
}


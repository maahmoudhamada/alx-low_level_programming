#include "main.h"
/**
 * main - Function that finds and prints the lagrest prime factor
 *
 * Return: Zero (0) on success One (1) other wise
 */
int main(void)
{
unsigned long int num = 612852475143, i = 2;
short found = 0;

while (num >= 1)
{
while (i)
{
if (num % i == 0)
{
if (num / i == 1)
found = 1;
num /= i;
break;
}
i++;
}
if (found)
{
printf("%ld\n", i);
break;
}
}
return (0);
}

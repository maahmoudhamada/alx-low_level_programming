#include <stdio.h>

/**
* main - Program to print the first 98 in fibonacci
*
* Return: Zero (0) on success
*/

int main(void)
{
unsigned long int f1, f2, f, i;

f1 = 0;
i = f2 = 1;

while (i <= 98)
{
f = f1 + f2;
printf("%lu\n", f);
f1 = f2;
f2 = f;
i++;
}
return (0);
}


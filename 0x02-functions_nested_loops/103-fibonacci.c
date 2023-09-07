/**
 * main - programm to print the sum of even and less than 4000000
 *
 * Return: 0 on Success
*/
#include <stdio.h>

int main(void)
{
unsigned long int i, f1, f2, f, sum;
i = f1 = f = sum = 0;
f2 = 1;

for (i = 0; i < 50; i++)
{
f = f1 + f2;
f1 = f2;
f2 = f;
if (f % 2 == 0 && f < 4000000)
sum += f;
}
printf("%ld\n", sum);
return (0);
}

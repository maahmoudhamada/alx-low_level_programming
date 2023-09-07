/**
 * main - program to print the sum of natural number from 0 to 1024
 *
 * Return: 0 on Success
*/
#include "main.h"
#include <stdio.h>
int main(void)
{
int i, sum;

i = sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d", sum);
return (0);
}

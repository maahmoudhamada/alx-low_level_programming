/**
 * main - programm to print the first 98 terms of fibonacci
 *
 * Return: 0 on Success
*/
#include <stdio.h>

int main(void)
{
unsigned long int i, f1, f2, f;
f1 = f = i = 0;
f2 = 1;

for (i = 1; i <= 98; i++)
{
f = f1 + f2;
printf("%lu", f);
f1 = f2;
f2 = f;
if (i == 98)
continue;
printf(", ");
}
putchar('\n');
return (0);
}

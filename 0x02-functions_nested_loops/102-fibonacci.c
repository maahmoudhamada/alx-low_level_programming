/**
 * main - programm to print the first 50 terms in fibonacci
 *
 * Return: 0 on Success
*/
#include <stdio.h>

int main(void)
{
long int f1, f2, f, i;
f1 = f = i = 0;
f2 = 1;

for (i = 1; i <= 50; i++)
{
f = f1 + f2;
printf("%ld", f);
f1 = f2;
f2 = f;
if (i == 50)
continue;
printf(", ");
}
putchar('\n');
return (0);
}

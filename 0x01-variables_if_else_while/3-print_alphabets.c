#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
int i, j;
i = j = 0;

for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (j = 'A'; j <= 'Z'; j++)
putchar(j);
putchar('\n');
return (0);
}

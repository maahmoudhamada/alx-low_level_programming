#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
putchar(i + '0');

for (j = 'a'; j <= 'f'; j++)
putchar(j);
putchar('\n');
return (0);
}

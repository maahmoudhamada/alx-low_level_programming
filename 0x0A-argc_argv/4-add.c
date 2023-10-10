#include <stdio.h>
/**
 * main - Function that prints sum of 2 numb
 *
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: Zero (0) on Success
 */
int main(int argc, char **argv)
{
int i, j, digit, numb, sum;

i = j = digit = numb = sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
digit = argv[i][j] - '0';
numb = numb * 10 + digit;
}
sum += numb;
numb = 0;
}
printf("%d\n", sum);
return (0);
}

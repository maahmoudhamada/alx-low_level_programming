#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that print minimum number of coins to make change
 *
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: Zero (0) on Success
 */
int main(int argc, char **argv)
{
int count, numb;

if (argc != 2)
{
printf("Error\n");
return (1);
}
numb = atoi(argv[1]);
for (count = 0; numb > 0; count++)
{
if (numb - 25 >= 0)
numb -= 25;
else if (numb - 10 >= 0)
numb -= 10;
else if (numb - 5 >= 0)
numb -= 5;
else if (numb - 2 >= 0)
numb -= 2;
else if (numb - 1 >= 0)
numb -= 2;
}
printf("%d\n", count);
return (0);
}

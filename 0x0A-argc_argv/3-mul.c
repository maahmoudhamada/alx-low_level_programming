#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function that prints result of multiple 2 numbers
 *
* @argc: Number of arguments passed
* @argv: Arguments passed
*
* Return: Zero (0) on Success
*/
int main(int argc, char **argv)
{
int mul = 0;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
}

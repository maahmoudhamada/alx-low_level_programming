#include <stdio.h>
/**
 * main - Function prints number of args execlude prog name
 *
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: Zero (0) on Success
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}

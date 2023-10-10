/**
 * main - Function that print name of the program
 *
 * @argc: Number of arguments passed
 * @argv: Arguments passed
 *
 * Return: Zero (0) on Success
*/
#include <stdio.h>

int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", argv[0]);
return (0);
}

#include <stdio.h>
/**
 * main - Function  that prints each arg in a new line
 *
* @argc: Number of arguments passed
* @argv: Arguments passed
*
* Return: Zero(0) on Success
*/
int main(int argc, char **argv)
{
int i = 0;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);
}

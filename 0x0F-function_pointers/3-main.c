#include "3-calc.h"
/**
 * main - Function that works as calcutator
 *
 * @argc: Number of arguments passed
 * @argv: Arguments Passed
 *
 * Return: 0 on Succes
 */
int main(int argc, char **argv)
{
int num1 = 0, num2 = 0, res = 0;
int (*ptr)(int a, int b);

if (argc < 4 || argc > 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

ptr = get_op_func(argv[2]);

if (ptr == NULL)
{
printf("Error\n");
exit(99);
}
if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
{
printf("Error\n");
exit(100);
}
res = ptr(num1, num2);
printf("%d\n", res);
return (0);
}

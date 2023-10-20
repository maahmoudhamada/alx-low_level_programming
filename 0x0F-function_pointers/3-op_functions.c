#include "3-calc.h"
/**
 * op_add - adds two
 *
 * @a: first numb
 * @b: second numb.
 *
 * Return: return integer
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - sub two
 *
 * @a: first numb
 * @b:second numb
 *
 * Return: return integer
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiply two
 *
 * @a: first numb
 * @b: second numb
 *
 * Return: return integer
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - divide two
 *
 * @a: first numb
 * @b:second numb
 *
 * Return: return integer
 */
int op_div(int a, int b)
{
if (b != 0)
return (a / b);
printf("Error\n");
exit(100);
}
/**
 * op_mod - module
 *
 * @a: first numb
 * @b: second numb
 *
 * Return: return integer
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}

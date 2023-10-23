#include "variadic_functions.h"
/**
 * sum_them_all - Variadic Function that sum all args passed
 *
 * @n: Number of arguments
 *
 * Return: Sum of them all(Integer)
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0, sum = 0;

va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
va_end(args);
return (sum);
}

#include "variadic_functions.h"
/**
 * print_numbers - Variadic function that prints args (Numbers) passed
 *
 * @separator: Separator between numbers printed
 * @n: NUmber of args passed
 *
 * Return: Void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
printf("\n");
}

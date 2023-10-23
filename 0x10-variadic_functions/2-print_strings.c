#include "variadic_functions.h"
/**
 * print_strings - Variadic function that print args (Strings) passed
 *
 * @separator: Separator between args (Strings)
 * @n: Number of args (Strings) passed
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *tmp;
va_list args;

va_start(args, n);
for (i = 0; i < n; i++)
{
tmp = va_arg(args, char *);
if (tmp == NULL)
printf("(nil)");
else
printf("%s", tmp);

if ((separator != NULL) && (i != (n - 1)))
printf("%s", separator);
}
va_end(args);
printf("\n");
}

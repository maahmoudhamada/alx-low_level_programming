#include "variadic_functions.h"

/**
 * print_all - Variadic function prints based on format specifiers
 *
 * @format: String to print based on
 *
 * Return: Void
*/
void print_all(const char *const format, ...)
{
char *str, *sep = ", ";
int len = 0, i = 0;
va_list args;
va_start(args, format);

while (format && format[len])
len++;
while (format && format[i])
{
if (i == len - 1)
sep = "";
switch (format[i])
{
case 'c':
printf("%c%s", va_arg(args, int), sep);
break;
case 'i':
printf("%d%s", va_arg(args, int), sep);
break;
case 'f':
printf("%f%s", va_arg(args, double), sep);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, sep);
break;
}
i++;
}
printf("\n");
va_end(args);
}

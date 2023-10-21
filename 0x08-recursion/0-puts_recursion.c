#include "main.h"

/**
 * _puts_recursion - Function print string using recursion
 *
 * @s: String printed
 *
 * Return: Void
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}

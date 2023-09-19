/**
 * print_rev - Function to print a string in reverse
 *
 * @s: String to be reversed
 *
 * Return: Void
 */
#include "main.h"

void print_rev(char *s)
{
int i, j, len;
i = len = j = 0;

for (i = 0; *(s + i) != '\0'; i++)
;
len = i - 1;

for (j = len; j >= 0; j--)
_putchar(*(s + j));

_putchar('\n');
}

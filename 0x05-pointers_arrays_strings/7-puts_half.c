/**
 * puts_half - Function that prints half of string
 *
 * @str: String to be printed
 *
 * Return: Void
 */
#include "main.h"

void puts_half(char *str)
{
int i, len, j;

i = len = j = 0;

for (i = 0; *(str + i) != '\0'; i++)
;
len = i;

for (i = len / 2; i <= len; i++)
_putchar(*(str + i));
_putchar('\n');
}

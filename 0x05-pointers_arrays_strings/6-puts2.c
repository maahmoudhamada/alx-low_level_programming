/**
 * puts2 - Function to print specific char from a string
 *
 * @str: String
 *
 * Return: Void
 */
#include "main.h"

void puts2(char *str)
{
int i;

for (i = 0; *(str + i) != '\0'; i += 2)
_putchar(*(str + i));

_putchar('\n');
}

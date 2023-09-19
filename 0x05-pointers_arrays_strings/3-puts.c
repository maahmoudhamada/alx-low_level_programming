/**
 * _puts - Function to print a string
 *
 * @str: String to be printed
 *
 * Return: Void
*/

#include "main.h"

void _puts(char *str)
{
int i;

for (i = 0; *(str + i) != '\0'; i++)
_putchar(*(str + i));
_putchar('\n');
}

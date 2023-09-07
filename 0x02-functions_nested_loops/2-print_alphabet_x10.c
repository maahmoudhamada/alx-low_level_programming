/**
 * print_alphabet_x10 - function that prints alphabet letters 10 times
 *
 * Return: Void
*/
#include "main.h"
void print_alphabet_x10(void)

{
int x, y;

x = y = 0;
for (x = 1; x <= 10; x++)
{
for (y = 'a'; y <= 'z'; y++)
_putchar(y);
_putchar('\n');
}
}

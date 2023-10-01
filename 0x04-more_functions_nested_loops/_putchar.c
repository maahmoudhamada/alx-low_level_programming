/**
 * _putchar - Function to print one char
 *
 * @c: Char to be printed
 *
 * Return: Integer
*/
#include "main.h"

int _putchar(char c)
{
return (write(1, &c, 1));
}

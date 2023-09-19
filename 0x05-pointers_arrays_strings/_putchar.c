/**
 * _putchar - Function to print one character
 *
 * @c: Character to be printed
 *
 * Return: Integer
 */

#include "main.h"

int _putchar(char c)
{
return (write(1, &c, 1));
}

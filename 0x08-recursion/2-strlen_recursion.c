#include "main.h"

/**
 * _strlen_recursion - Function the gets len of string
 *
 * @s: String to be measured
 *
 * Return: Length of string (Integer)
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

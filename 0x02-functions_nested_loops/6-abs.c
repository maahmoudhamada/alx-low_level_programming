/**
 * _abs - Function that convert negative numb to positive(abs)
 *
 * @n: Number to be converted
 *
 * Return: integer (Converted number)
*/
#include "main.h"

int _abs(int n)
{
if (n < 0)
n *= -1;

return (n);
}

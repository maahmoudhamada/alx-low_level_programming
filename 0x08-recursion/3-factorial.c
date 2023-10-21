#include "main.h"

/**
 * factorial - Function thet gets the factorial of a number
 *
 * @n: Number (integer)
 *
 * Return: Factorial of a number (integer)
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}

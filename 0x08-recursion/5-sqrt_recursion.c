#include "main.h"

/**
 * isSqrt - Checker for _sqrt_recursion function
 *
 * @n: Starting number to compare with
 * @base: Base number
 *
 * Return: Number (n) on success -1 other wise
*/
int isSqrt(int n, int base)
{
if (n * n == base)
return (n);
else if (n * n > base)
return (-1);
else
return (isSqrt(n + 1, base));
return (-1);
}

/**
 * _sqrt_recursion - Function that checks for square root
 *
 * @n: Base number to be checked
 *
 * Return: Number (n) on success -1 other wise
 */
int _sqrt_recursion(int n)
{
return (isSqrt(1, n));
}

#include "main.h"

/**
 * isPrime - Checker for is_prime_number function
 *
 * @n: Statring number to compare with base
 * @base: Base number
 *
 * Return: One (1) if it's prime Zero (0) otherwise
*/
int isPrime(int n, int base)
{
if (base == n)
return (1);
else if (base % n == 0)
return (0);
else
return (isPrime(n + 1, base));
}

/**
 * is_prime_number - Function checks if (n) is prime number
 *
 * @n: Number to be checked
 *
 * Return: One (1) if it's prime Zero (0) otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else
return (isPrime(2, n));
}

#include "main.h"

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

/**
 * isPalin - Checker for is_plaindrome function
 *
 * @s: String
 * @lenO: Start of string
 * @lenT: End of string
 *
 * Return: One (1) if plain Zero (0) otherwise
 */

int isPalin(char *s, int lenO, int lenT)
{
int flag = lenT / 2, cmp = s[lenO] - s[lenT];

if (lenT == flag)
return (1);
else if (cmp != 0)
return (0);
else
return (isPalin(s, lenO + 1, lenT - 1));
}

/**
 * is_palindrome - Function to detect plaindrome words
 *
 * @s: Word to be checked
 *
 * Return: One (1) if plain Zero (0) otherwise
 */
int is_palindrome(char *s)
{
int lenT = _strlen_recursion(s);

if (lenT == 0)
return (1);
else
return (isPalin(s, 0, lenT - 1));
}

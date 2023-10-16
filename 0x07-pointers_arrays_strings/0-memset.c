#include "main.h"

/**
 * _memset - Function set memory with a const char
 *
 * @s: Memory area
 * @b: Character
 * @n: Number of bytes
 *
 * Return: Pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

#include "main.h"
/**
 * _strlen - Function that gets length of a string
 *
 * @s: String to be measured
 *
 * Return: Length (Integer)
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
 * string_nconcat - Function that concat 2 string using malloc
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of byte(s) to be copied
 *
 * Return: pointer to char (string)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strO, *strT, *ptr;
unsigned int lenO, lenT, x, y;

lenO = lenT = x = y = 0;

strO = s1 == NULL ? "" : s1;
strT = s2 == NULL ? "" : s2;
lenO = _strlen(strO);
lenT = _strlen(strT);

if (n >= lenT)
n = lenT;
ptr = malloc((lenO + n + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
else
{
for (x = 0; x < lenO; x++)
ptr[x] = strO[x];
for (y = 0; y < n; y++, x++)
ptr[x] = strT[y];
ptr[x] = '\0';
return (ptr);
}
}

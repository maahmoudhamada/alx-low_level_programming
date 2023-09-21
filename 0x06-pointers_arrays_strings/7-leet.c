/**
 * leet -Function that encodes a string into 1337.
 *
 * @s: String to be encoded
 *
 * Return: Pointer to character
 */
#include "main.h"

char *leet(char *s)
{
int i, j;
char *letters = "aeotlAEOTL";
char *numbers = "4307143071";

i = j = 0;

while (*(s + i) != '\0')
{
for (j = 0; j < 11; j++)
{
if (*(s + i) == *(letters + j))
*(s + i) = *(numbers + j);
}
i++;
}
return (s);
}

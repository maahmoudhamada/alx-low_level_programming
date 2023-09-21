/**
 * string_toupper - Function that caps any letter in a string
 *
 * @s: String to be capitalized
 *
 * Return: Pointer to character
*/
#include "main.h"

char *string_toupper(char *s)
{
int i = 0;

for (i = 0; *(s + i) != '\0'; i++)
{
if ((*(s + i) >= 'a') && (*(s + i) <= 'z'))
*(s + i) -= 32;
}
return (s);
}

#include "main.h"
/**
 * cap_string - Function to cap first letter of word in a string
 *
 * @str: String
 *
 * Return: Pointer to character
 */

char *cap_string(char *str)
{
int i, j;
char signs[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

i = j = 0;

while (str[i] != '\0')
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
for (j = 0; signs[j] != '\0'; j++)
{
if (str[i] == signs[j])
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
i++;
}
return (str);
}

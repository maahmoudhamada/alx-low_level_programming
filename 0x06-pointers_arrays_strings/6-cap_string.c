/**
 * cap_string - Function to cap first letter of word in a string
 *
 * @str: String
 *
 * Return: Pointer to character
 */
#include "main.h"

char *cap_string(char *str)
{
char c[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
int i, j, len;
len = j = i = 0;

len = sizeof(c) / sizeof(char);
while (str[i] != '\0')
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
for (j = 0; j < len; j++)
{
if (str[i] == c[j])
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
i++;
}
return (str);
}

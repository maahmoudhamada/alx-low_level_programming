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

for (i = 0; i < len; i++)
{
for (j = 0; *(str + j) != '\0'; j++)
{
if (str[j] == c[i] && (str[j + 1]) >= 'a' && (str[j + 1] <= 'z'))
str[j + 1] -= 32;
}
}
return (str);
}

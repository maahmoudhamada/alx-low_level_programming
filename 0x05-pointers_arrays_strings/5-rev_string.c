/**
 * rev_string - Function that reverse a string using swap method
 *
 * @s: string to be reversed
 *
 * Return: Void
*/
#include "main.h"

void rev_string(char *s)
{
int i, j, len;
char *str, temp;

i = j = len = 0;
str = s;

for (i = 0; *(s + i) != '\0'; i++)
;
len = i - 1;

for (j = 0; j <= len - 1; j++)
{
temp = str[j];
str[j] = str[len];
str[len--] = temp;
}
}

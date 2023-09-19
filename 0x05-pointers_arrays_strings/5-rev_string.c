/**
 * rev_string - Function that reverse a string using swap method
 *
 * @s: String to be reversed
 *
 * Return: Void
 */
#include "main.h"

void rev_string(char *s)
{
int len, i, j;
char temp;
len = i = j = 0;

for (i = 0; *(s + i) != '\0'; i++)
;

len = i - 1;
for (j = 0; j < len / 2; j++)
{
temp = *(s + j);
*(s + j) = *(s + len);
*(s + len--) = temp;
}
}

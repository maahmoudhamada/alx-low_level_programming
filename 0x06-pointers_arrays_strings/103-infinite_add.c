#include "main.h"

/**
* _isdigit - Function that checks if its digit or not
*
* @ch: char to be checked
*
* Return: 1 if its digit 0 otherwise
*/

int _isdigit(int ch)
{
if (ch >= '0' && ch <= '9')
return (1);
return (0);
}
/**
* _strlen - Function that gets string length
*
* @s: String to be calc
*
* Return: Length of string (Integer)
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}

/**
* addition - Function that adds 2 strings
*
* @n1: First string (number)
* @n2: Second string (number)
*
* Return: Result string
*/
char *addition(char *n1, char *n2)
{
int i, l1, l2, lf, t1, t2, r1, r2, calc, left;
char *res;
i = r1 = r2 = calc = left = 0;
l1 = _strlen(n1), l2 = _strlen(n2), lf = max(l1, l2);
t1 = (l1 - 1), t2 = (l2 - 1);

res = malloc(100 * sizeof(char));
if (res == NULL)
return (NULL);
for (i = 0; i < lf; i++, t1--, t2--)
{
r1 = (((t1 >= 0 && _isdigit(n1[t1])) ? n1[t1] - '0' : 0));
r2 = ((t2 >= 0) && (_isdigit(n2[t2])) ? (n2[t2] - '0') : 0);
calc = r1 + r2 + left;
if (calc >= 10)
left = calc / 10;
else
left = 0;

res[i] = (calc % 10) + '0';
}

if (left > 0)
{
res[i] = left + '0';
i++;
}

res[i] = '\0';
return (res);
}

/**
* infinite_add - Function that add infinte two number
*
* @n1: First number (string)
* @n2: Second number (string)
* @r: Returned string
* @size_r: Size of returned string
*
* Return: Result string
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len, start, end;
char *tmp, t;

tmp = addition(n1, n2);
len = _strlen(tmp);
start = 0, end = (len - 1);
if (len <= size_r && len != size_r)
{
while (start < end)
{
t = tmp[start];
tmp[start] = tmp[end];
tmp[end] = t;
start++;
end--;
}
r = tmp;
return (r);
}
else
return (NULL);
}


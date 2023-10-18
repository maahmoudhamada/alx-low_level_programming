#include "main.h"

/**
 * free2D - Function that free Double pointer
 *
 * @s: Double pointer
 * @n: Size
 *
 * Return: Void
 */
void free2D(char **s, int n)
{
int i = 0;
for (i = 0; i < n; i++)
free(s[i]);
free(s);
}

/**
 * wordCount - Function that count words in string
 *
 * @s: String
 *
 * Return: Number of words (Integer)
 */
int wordCount(char *s)
{
int i = 0, count = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == ' ')
continue;
if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
count++;
}
return (count);
}

/**
 * wordLen - Function that gets length of each word in a string
 *
 * @s: String
 *
 * Return: Length of a word (Integer)
 */
int wordLen(char **s)
{
int count = 0;
while (**s != '\0')
{
if (**s == ' ')
(*s)++;
if (**s != ' ')
{
count++;
(*s)++;
if (**s == ' ' || **s == '\0')
break;
}
}
return (count);
}

/**
 * setString - Function that set a string for each word
 *
 * @s: String
 * @len: Length of word
 *
 * Return: Pointer to char
 */
char *setString(char **s, int len)
{
char *tmp;
int i = 0;

tmp = malloc((len + 1) * sizeof(char));
if (tmp == NULL)
return ('\0');
else
{
while (**s != '\0')
{
if (**s == ' ')
(*s)++;
else
{
tmp[i] = **s;
i++;
(*s)++;
if (**s == ' ' || **s == '\0')
break;
}
}
tmp[i] = '\0';
return (tmp);
}
}

/**
 * strtow - Function that split a string to word in 2D array
 *
 * @str: String to be splited
 *
 * Return: 2D array (pointer to pointer to char)
 */
char **strtow(char *str)
{
char **ptr, *tmp1, *tmp2, *tmp3;
int wl, wc, i, j;
wl = wc = i = j = 0;
if (str == NULL || *str == '\0')
return (NULL);
wc = wordCount(str);
if (wc == 0)
return (NULL);
ptr = malloc((wc + 1) * sizeof(char *));
if (ptr == NULL)
return (NULL);
else
{
tmp1 = str;
tmp2 = str;
for (i = 0; i < wc; i++)
{
wl = wordLen(&tmp1);
ptr[i] = malloc((wl + 1) * sizeof(char));
if (ptr[i] == NULL)
free2D(ptr, wc);
tmp3 = setString(&tmp2, wl);
for (j = 0; j < wl; j++)
ptr[i][j] = tmp3[j];
ptr[i][j] = '\0';
wl = 0;
j = 0;
}
ptr[i] = NULL;
return (ptr);
}
}

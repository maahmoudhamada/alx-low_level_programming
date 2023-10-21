#include "main.h"

/**
 * wordCount - Function that count words in a string
 *
 * @s: String to search within
 *
 * Return: Number(s) of words (Integer)
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
 * letterCount - Function that counts letters in each word
 *
 * @s: String to be searched within
 *
 * Return: Number(s) of letters in a word(s)
 */
int letterCount(char **s)
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
 * set - Function that fill a memory location with another string
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to char
 */
void *set(char *s1, char **s2)
{
int i = 0;

while (**s2 != '\0')
{
if (**s2 == ' ')
(*s2)++;
if (**s2 != ' ' && **s2 != '\0')
{
s1[i] = **s2;
(*s2)++;
i++;
if (**s2 == ' ' || **s2 == '\0')
break;
}
}
s1[i] = '\0';
return (s1);
}

/**
 * free2D - Function that frees a 2D array
 *
 * @s: 2D array to be freed
 * @len: Size of the array
 *
 * Return: Void
 */
void free2D(char **s, int len)
{
int i = 0;
for (i = 0; i < len; i++)
free(s[i]);
free(s);
}

/**
 * strtow - Function that splits a string to words in 2D array
 *
 * @str: String to be splited
 *
 * Return: Pointer to pointer to char
 */
char **strtow(char *str)
{
int i = 0, wc, lc;
char *tmp1, *tmp2, **p;
tmp1 = str;
tmp2 = str;

if (str == NULL || str == 0)
return ('\0');

wc = wordCount(str);
if (wc == 0)
return (NULL);
p = malloc((wc + 1) * sizeof(char *));
if (p == NULL)
return ('\0');
else
{
for (i = 0; i < wc; i++)
{
lc = letterCount(&tmp1);
p[i] = malloc((lc + 1) * sizeof(char));
if (p[i] == NULL)
{
free2D(p, wc);
return (NULL);
}
set(p[i], &tmp2);
lc = 0;
}
p[i] = NULL;
return (p);
}
}

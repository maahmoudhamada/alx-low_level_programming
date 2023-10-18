#include "main.h"
/**
 * _strlen - Function that computes length of a string
 *
 * @s: String to be measured
 *
 * Return: Integer
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i) != '\0')
i++;
return (i);
}
/**
 * argstostr - Function that concat all args into one string
 *
 * @ac: Number of args
 * @av: Arguments
 *
 * Return: Pointer to char
 */
char *argstostr(int ac, char **av)
{
int i, x, y, len, n, count;
char *ptr;
i = x = y = len = n = count = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
n = _strlen(av[i]) + 1;
len += n;
n = 0;
}
ptr = (char *)malloc((len + 1) * sizeof(char));
if (ptr == NULL)
return (NULL);
else
{
for (x = 0; x < ac; x++)
{
for (y = 0; y < (_strlen(av[x]) + 1); y++)
{
if (av[x][y] == '\0')
continue;
ptr[count++] = av[x][y];
}
ptr[count++] = '\n';
}
ptr[count] = '\0';
return (ptr);
}
}

#include "main.h"
/**
 * _isdigit - Function that check if its digit or not
 *
 * @n: digit to be checked
 *
 * Return: Integer
 */
int _isdigit(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (n[i] < '0' || n[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * _strlen - Function that gets the length of a string
 *
 * @s: String to be measured
 *
 * Return: Length (Integer)
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;
return (i);
}

/**
 * main - Function that multiplie 2 numbers
 *
 * @argc: Number of arguments passed
 * @argv: Arguments
 *
 * Return: Integer
 *
 */
int main(int argc, char *argv[])
{
int p, res, len, n1, n2, i, j;
int *total;

if (argc < 3 || argc > 3 || !(_isdigit(argv[1])) || !(_isdigit(argv[2])))
puts("Error"), exit(98);
if (argv[1][0] == '0' || argv[2][0] == '0')
{
printf("0\n");
return (0);
}
n1 = _strlen(argv[1]), n2 = _strlen(argv[2]);
len = n1 + n2;
total = calloc(len, sizeof(int *));
if (total == NULL)
puts("Error"), exit(98);
for (i = (n2 - 1); i > -1; i--)
{
res = 0;
for (j = (n1 - 1); j > -1; j--)
{
p = (argv[2][i] - '0') * (argv[1][j] - '0');
res = (p / 10);
total[(i + j) + 1] += (p % 10);
if (total[(i + j) + 1] > 9)
{
total[i + j] += total[(i + j) + 1] / 10;
total[(i + j) + 1] = total[(i + j) + 1] % 10;
}
total[(i + j)] += res;
}
}
if (total[0] == 0)
i = 1;
else
i = 0;
for (; i < len; i++)
printf("%d", total[i]);
printf("\n");
free(total);
return (0);
}

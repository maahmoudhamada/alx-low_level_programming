#include "main.h"
#include <string.h>

/**
 * _strcmp - Function to compare to 2 String together
 *
 * @s1: First String
 * @s2: Second String
 *
 * Return: Integer
*/

int _strcmp(char *s1, char *s2)
{
int i, cmp;
i = cmp = 0;

for (i = 0; *(s1 + i) != '\0' || *(s2 + i) != '\0'; i++)
{
cmp = *(s1 + i) -*(s2 + i);
if (cmp < 0 || cmp > 0)
break;
else
continue;
}
return (cmp);
}

/**
* error_handling - Function to handle errors
*
* @n1: Indicator
* @s1: Argument with the error
*
* Return: void
*/

void error_handling(int n1, char *s1)
{
if (n1 == -1)
{
if (_strcmp(s1, "src") == 0)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s1);
exit(98);
}
else
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s1);
exit(99);
}
}
return;
}

/**
* main - Function that cp one file to another
*
* @argc: Number of arguments
* @argv: Arguments
*
* Return: Zero (0) on success one (1) otherwise
*/

int main(int argc, char **argv)
{
char *src, *dest, buf[BUFSZ];
int fdd, fds, c1, c2;
ssize_t rnum, wnum;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(98);
}
src = argv[1], dest = argv[2];
fdd = open(dest, O_TRUNC | O_RDWR | O_CREAT, 0664);
fds = open(src, O_RDWR);
if (fdd == -1 || fds == -1)
{
error_handling(fdd, dest);
error_handling(fds, src);
}
while (rnum != 0)
{
rnum = read(fds, buf, BUFSZ);
wnum = write(fdd, buf, rnum);
if (rnum == -1 || wnum == -1)
{
error_handling(rnum, "src");
error_handling(wnum, "dest");
}
}
c1 = close(fdd);
c2 = close(fds);
if (c1 == -1 || c2 == -1)
{
if (c1 == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdd);
else
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fds);
exit(100);
}
return (0);
}


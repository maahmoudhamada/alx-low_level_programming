#include "main.h"
/**
* first_line - Function to print the first part of a line
*
* @p: Intger
*
* Return: Void
*/

void first_line(int p)
{
int *tmp, i = 0, j = 0, num[] = {10, 11, 12, 13, 14, 15};
char *hex = "abcdef";

tmp = malloc(8 * sizeof(int));

for (i = 0; tmp[i] != '\0'; i++)
tmp[i] = 0;

for (j = 7; p >= 1; j--, p /= 16)
tmp[j] = p % 16;

for (j = 0; j < 8; j++)
{
if (tmp[j] >= 10)
{
for (i = 0; i < 6; i++)
if (tmp[j] == num[i])
{
printf("%c", hex[i]);
continue;
}
}
else
printf("%c", tmp[j] + '0');
}
printf(": ");

}

/**
* converter - Function to convert decimal to hex or oct
*
* @n: Number to be converted
* @base: Base number (16 or 8)
*
* Return: Pointer to char
*/

char *converter(int n, int base)
{
int digit[] = {10, 11, 12, 13, 14, 15}, *hold, num, sz, i, j, z;
char *final, *hex = "abcdef";
num = n, i = j = z = sz = 0;
if (n == 0)
return (nil);

sz = 2;
hold = malloc(sz *sizeof(int));
final = malloc((sz + 1) * sizeof(char));

for (i = 0; i < sz; i++)
hold[i] = 0;

for (i = sz - 1; i >= 0; i--, num /= base)
hold[i] = num % base;

for (j = 0; j < sz; j++)
{
if (hold[j] >= 10)
{
for (z = 0; z < 6; z++)
if (hold[j] == digit[z])
final[j] = hex[z];
}
else
final[j] = hold[j] + '0';
}
final[j] = '\0';
return (final);
}

/**
* middle_line - Function to print the rest of the line
*
* @s: Address of the string to be printed
* @sz: Size of character printed
*
* Return: Void
*/

void middle_line(char **s, int sz)
{
char *ptr, *tmp, *rec;
int i = 0, j = 0, y = 0, z = 0;

ptr = *s;
tmp = malloc(26 * sizeof(char));
for (i = 0; i < 26; i++)
tmp[i] = ' ';
tmp[i] = '\0';

for (i = 0; i < sz / 2; i++)
{
for (y = 0; y < 2; y++, (*s)++)
{
rec = converter(**s, 16);
for (j = 0; rec[j] != '\0'; j++, z++)
{
tmp[z] = rec[j];
}
}
z++;
}
printf("%s", tmp);

for (i = 0; i < sz; i++, ptr++)
{
if ((*ptr > 0 && *ptr < 32) || *ptr >= 127 || *ptr == '\0')
{
putchar('.');
continue;
}
else
putchar(*ptr);
}
}

/**
* print_buffer - Function to print buffer
*
* @b: Buffer to be printed
* @size: Size of the buffer
*
* Return: Void
*/

void print_buffer(char *b, int size)
{
int i, n1, n2, fn;
char *ptr = b;
i = fn = 0, n1 = size, n2 = size - 10;
if (size <= 0)
printf("\n");

else
{
while (i < size)
{
n1 = (n1 > 0) ? n1 : 0;
n2 = (n2 > 0) ? n2 : 0;
fn = n1 - n2;
first_line(i);
middle_line(&ptr, fn);
putchar('\n');
i += 10, n1 -= 10, n2 -= 10;
}
}
}


/**
 * _strlen - Function to calc string length
 *
 * @s: String to be measured
 *
 * Return: String length (Integer)
*/
#include "main.h"

int _strlen(char *s)
{
int i;

for (i = 0; *(s + i) != '\0'; i++)
;
return (i);
}

/**
 * swap_int - Function to swap 2 integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: Void
*/
#include "main.h"

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}

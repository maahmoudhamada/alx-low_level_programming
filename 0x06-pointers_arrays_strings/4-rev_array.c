/**
 * reverse_array - Function to reverse an array of integer
 *
 * @a: Array to be reversed
 * @n: Number of elements in the array
 *
 * Return: Void
*/
void reverse_array(int *a, int n)
{
int t, start, stop;
t = start = stop = 0;

stop = n - 1;

while (start < stop)
{
t = a[start];
a[start++] = a[stop];
a[stop--] = t;
}
}

#include "main.h"

/**
 * free2D - Function that free 2D array
 *
 * @grid: Array to be freed
 * @height: Height of array
 *
 * Return: Void
*/

void free2D(int **grid, int height)
{
int i = 0;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}

/**
 * alloc_grid - Function that allocate 2D array using malloc
 *
 * @width: Width of array
 * @height: Height of array
 *
 * Return: pointer to pointer to integer (2D array)
*/

int **alloc_grid(int width, int height)
{
int **ptr, i, x, y;

i = x = y = 0;

if (width <= 0 || height <= 0)
return (NULL);
ptr = malloc(height * sizeof(int *));
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < height; i++)
{
ptr[i] = malloc(width * sizeof(int));
if (ptr[i] == NULL)
{
free2D(ptr, height);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
ptr[x][y] = 0;
}
return (ptr);
}
}

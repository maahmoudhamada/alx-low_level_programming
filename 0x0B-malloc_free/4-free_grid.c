#include "main.h"
/**
 * free_grid - Function that free 2D array
 *
 * @grid: Array to be freed
 * @height: Height of array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
int i = 0;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}

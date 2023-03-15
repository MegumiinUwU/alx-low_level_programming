#include<stdlib.h>
#include<stdio.h>

/**
 * free_grid - a function ...
 * @grid: the matrice
 * @height: the number
 *
 * Return: 1 or 0
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

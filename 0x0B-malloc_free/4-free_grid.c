#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees grid array
 *
 * @grid: grid
 *
 * @height: dimentional height of grid
 *
 * Description: frees memory of grid
 *
 * Return: nothing (success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

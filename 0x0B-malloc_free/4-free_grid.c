#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2 dimensional array
 * @grid: The two dimensional grid to be freed
 * @height:height of the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{

	int a;

	grid = malloc(sizeof(int *) * height);
	{
		for (a = 0; grid[a]; a++)
		{
			grid[a] = malloc(sizeof(int) * a);
			free(grid);
		}
	}
}


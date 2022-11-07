#include "main.h"
/**
* free_grid - a function that frees a 2 dimensional grid
* @grid : grid of free_grid
* @height : height of fre_grid
* Return: pointer
*/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

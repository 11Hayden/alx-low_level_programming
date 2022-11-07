#include "main.h"
/**
* alloc_grid -  a function that returns a pointer to a 2 dimensional array
* @width: width of alloc grid
* @height: height of alloc grid
* Return: grid
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (a -= 1; a >= 0; a--)
			{
				free(grid[a]);
			}

			free(grid);
			return (NULL);
		}
	}
	for (a = 0; b < width; b++)
		grid[a][b] = 0;
	return (grid);
}

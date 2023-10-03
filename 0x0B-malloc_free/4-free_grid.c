#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: memory to free
 * @height: height of array
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

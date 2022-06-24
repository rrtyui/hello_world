#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 *free_grid - function that returns a pointer to a 2 dimensional array.
 *@grid: par
 *@height: par
 *Return: grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

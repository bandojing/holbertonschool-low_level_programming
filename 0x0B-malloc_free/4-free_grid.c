#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees up space allocated to a 2d grid
 * @grid: pointer to a pointer to a 2d grid
 * @height: height
(* a blank line
* Description: frees a 2d grid
*
(* section header: Section description)*
* Return: void
*/

void free_grid(int **grid, int height)
{

	int freecount;

	for (freecount = 0; freecount < height; freecount++)
		free(grid[freecounter]);
	free(grid);
}

/**
 * free_grid - frees a 2 dimensional grid
 * @grid : Array
 * @height : height of the array
 * @i - used for llop
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}


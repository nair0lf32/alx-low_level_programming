#include "main.h"
#include <stdlib.h>
/**
*free_grid - free memory for a 2D array of integers
*@grid: pointer to the 2D array
*@height: height of the array
*Return: nothing
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

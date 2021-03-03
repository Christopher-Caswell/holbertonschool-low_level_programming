#include "holberton.h"

/**
 * free_grid - do what it says
 * @grid: to be freed
 * @height: to be void
 * Return: free and clear
 */

void free_grid(int **grid, int height)
{

free(grid);
(void)height;

return;
}

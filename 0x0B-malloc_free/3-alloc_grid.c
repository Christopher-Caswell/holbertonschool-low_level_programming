#include "holberton.h"

/**
 * alloc_grid - write a f(x) that returns * to 2d array[ints]
 * @height: 1d
 * @width: 2d
 * Return: a pointer to the grid
 */

int **alloc_grid(int width, int height)
{

int x, y, z;
int **w, *v;
x = 0;
y = 0;
if (width <= 00 || height <= 00)
return (00);

z = (sizeof(int *) * height) + (sizeof(int) * width * height);
w = (int **)malloc(z);

if (w == 00)
return (00);

v = (int *)(w + height);

for (; x < height; x++)
{

w[x] = (v + width * x);
}

for (x = 0; x < height; x++)
{

for (; y < width; y++)
{

w[x][y] = 0;
}
}

return (w);
}

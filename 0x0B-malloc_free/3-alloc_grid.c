#include "holberton.h"

/**
 * alloc_grid - write a f(x) that returns * to 2d array[ints]
 * @height: 1d
 * @width: 2d
 * Return: a pointer to the grid
 */

int **alloc_grid(int width, int height)
{

int x, y, z, z1, z2;
x = 0;
y = 0;



if (width == 00 || height == 00)
return (00);

while (width[x])
{

while (height[y])
{

z[x] = height[y];
x++;
}

z[x] = width[y];
y++;
}

 return(z);
}

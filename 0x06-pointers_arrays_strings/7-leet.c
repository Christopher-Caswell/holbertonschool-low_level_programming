#include "holberton.h"
/**
 * leet - 1337 y0
 * @array: 743 4rr4/
 * Return: 743 1|\|f0
 */

char *leet(char *array)
{
int ex;
int y;

char original[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
char replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (ex = 0; array[ex] != 00; ex++)
{

for (y = 0; y < 10; y++)
{

if (array[ex] == original[y])
{

array[ex] = replace[y];
}
}
}
return (array);
}

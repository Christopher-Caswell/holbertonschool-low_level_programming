#include "holberton.h"
/**
 * rot13 - 1337 y0
 * @array: 743 4rr4/
 * Return: 743 1|\|f0
 */

char *rot13(char *array)
{
int ex, y;


char *original = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *replace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (ex = 0; array[ex] != 00; ex++)
{

for (y = 0; y < 52; y++)
{

if (array[ex] == original[y])
{

array[ex] = replace[y];
break;
}
}
}
return (array);
}

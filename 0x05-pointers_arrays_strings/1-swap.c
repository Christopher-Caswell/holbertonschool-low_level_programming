#include "holberton.h"

/**
 * swap_int - swaps variables
 *@a: value
 *@b: value
 * Return: 0
 */

void swap_int(int *a, int *b)
{

int tmp = *a;
*a = *b;
*b = tmp;
}

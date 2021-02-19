#include "holberton.h"

/**
 *
 *
 *
 *
 */

void reverse_array(int *a, int n)
{

int tmp;
int v, w;
v = 0;
w = n;

while (w > v)
{

tmp = a[v];
a[v] = a[w - 1];
a[w -1] = tmp;

v++;
w--;
}

return;
}

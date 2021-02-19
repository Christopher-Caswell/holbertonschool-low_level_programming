#include "holberton.h"
/**
 * _strncpy - create a replica of strcpy
 * @src: source of string
 * @dest: place to copy
 * @n: indicate the end of the copy
 * Return: destination, final
*/

char *_strncpy(char *dest, char *src, int n)
{/* 0*/

int x;

for (x = 0; x < n && src[x] != 00; x++)
{/* 1*/
dest[x] = src[x];
}
for ( ; x < n; x++)
{/* 2*/
dest[x] = 00;
}
return (dest);
}

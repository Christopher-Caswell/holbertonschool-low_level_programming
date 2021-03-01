#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - base function
 * @argc: number of arguments in line
 * @argv: strings
 * Return: 0 or 1, added volumes if 0
 */

int main(int argc, char *argv[])
{

int x, y, z;
z = 0;

for (x = 0; x < argc - 1; x++)
{

if
(isdigit(argv[x + 1]) == 0);
{

printf("Error\n");
return (1);
}

y = atoi(*argv);
z += y;
}

printf("%d\n", z);
return (0);
}

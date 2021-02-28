#include "holberton.h"

/**
 * main - the function basic
 * @argv: the volume of strings
 * @argc: the volme of spaces
 * Return: 0, for reasons I still don't understand
 */

int main(int argc, char *argv[])
{

if (argc != 3)
{

printf("Error");
return (1);
}

printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));

return (0);
}

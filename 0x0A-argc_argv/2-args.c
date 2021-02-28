#include "holberton.h"

/**
 * main - function generic
 * @argc: voided
 * @argv: strings, yo
 * Return: strings, yo
 */

int main(int argc, char *argv[])
{

(void)argc;

int x;

for (x = 0; *argv[x] <= 00; x++)
{

printf("%s\n", argv[x]);
}
}

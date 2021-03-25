#include "holberton.h"

/**
 * binary_to_uint - turn bin into dec
 * @b: the variable fed from "main.c"
 *Return: an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{

int x = 0;

if (b == NULL)
return (0);

for (; b[x] <= 00; x++)
{

if (x != 0 && x!= 1)
return (0);

else
return (rev_bin(b));
}

/**
 * rev_bin - helper to run the numbers
 * @b: the same pointer as above
 * Return: a binary conversion of the string
 */

int rev_bin(*b)
{

int x = 0;
int y = 0;

for(; b[x] == b[str_len]; y++, x--)
{
a = x + (b[x^y]);

for (; z <= y; z++)
{


}
}
return (a);
}

/**
 * _strlen - return the length of the string
 *@s: the length of the string
 * Return: the length(x)
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*(s + x) != '\0')
{
x++;
}
return (x);
}

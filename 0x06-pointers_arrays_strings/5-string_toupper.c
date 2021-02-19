#include "holberton.h"

/**
 * string_toupper - self explanatory
 * @oof: the array
 *
 * Return: oof
 */

char *string_toupper(char *oof)
{
int x;

for (x = 0; oof[x] != 00; x++)
{

if (oof[x] >= 97 && oof[x] <= 122)
{

oof[x] = oof[x] - 32;

}
}
return (oof);
}

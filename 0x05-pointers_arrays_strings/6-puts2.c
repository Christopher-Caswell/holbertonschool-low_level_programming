#include "holberton.h"

/**
 * puts2 - places character
 * @str: the string in question
 * Return: none
 */

void puts2(char *str)
{ /* 1*/

int x;

x = 0;

while (str[x] != '\0')
{ /* 2*/

if (x % 2 == 0)
{ /* 3 */

_putchar(str[x]);
}

x++;
}

_putchar('\n');
return;
}

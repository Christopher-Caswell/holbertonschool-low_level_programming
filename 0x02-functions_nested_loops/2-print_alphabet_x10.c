#include "holberton.h"

/**
* print_alphabet_x10 - print the alphabet 10x
*
* Return: 0, stop
*/

void print_alphabet_x10(void)
{

char x;
char y;

y = 0;

while (y < 10)
{

x = 'a';

while (x <= 'z')
{

_putchar(x);

x++;
}

_putchar('\n');

y++;
}

return;
}

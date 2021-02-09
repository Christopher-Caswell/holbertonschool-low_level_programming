#include "holberton.h"

/**
* main - function containment
*
* Return: 0, end function
*/

void print_to_98(int n)
{

char y;


y = ('98');


if (n < 98)

{


_putchar(n);
_putchar(',');
_putchar(' ');
n++;


}


if (n > 98)


{


_putchar(n);
_putchar(',');
_putchar(' ');
n--;

}

_putchar(y);
_putchar('\n');

/** write a function that prints all numbers from n-98, followed by new line*/

return 0;

}

#include "holberton.h"

/**
* main - determining the functions of the code
* holberton.h will define the function of _putchar, but like, later
* Return: 0, no mas loop
*/

int main(void)

{

char a[9];

int q;


q = 0;

a[0] = 'H';
a[1] = 'o';
a[2] = 'l';
a[3] = 'b';
a[4] = 'e';
a[5] = 'r';
a[6] = ('t');
a[7] = 'o';
a[8] = 'n';

while (q <= 9)

{


_putchar(a[q]);

q++;

}


_putchar('\n');

return (0);

}

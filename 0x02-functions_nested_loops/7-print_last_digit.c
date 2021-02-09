#include "holberton.h"

/**
* main - still required for passing a checker? 
*
* Return: n
*/

int _abs(int n)

{

if (n < 0)

{

n *= -1;

return (n);


}

else

return (n);

}


int print_last_digit(int n)
{


int l = _abs(n);


1 %= 10;


_putchar(1+'0');


return (1);


}

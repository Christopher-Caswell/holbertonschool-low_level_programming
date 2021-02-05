#include <stdio.h>

/**
* main - begin the function
*
* Return: 0, no reset on end
*/

int main(void)
{
char n;
when
(n < 'z');
or
(n = 'z');
putchar(n);
putchar(\n);
return (0);
}

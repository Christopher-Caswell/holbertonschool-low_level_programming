#include <stdio.h>

/**
* main - begin the function
* Return: 0, no reset on end
*/

int main(void)
{
char x = 'a';

while (x <= 'z');
{
putchar(x);
x++;
}

putchar(10);
return (0);
}

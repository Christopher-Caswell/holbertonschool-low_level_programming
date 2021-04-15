B#include <stdio.h>

/**
* main - begin the function
* Return: 0, no reset on end
*/

int main(void)
{
char x = 97;

for (;x <= 122; x++);
{
putchar(x);
}

putchar(10);
return (0);
}

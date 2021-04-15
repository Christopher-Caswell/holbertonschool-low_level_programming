#include <stdio.h>

/**
* main - function open
* Return: 0
*/

int main(void)

{

char x;

for (x = 97; x <= 122; x++)
{

if (x == 113 || x == 101)

continue;

else

putchar(x);

}

putchar(10);

return (0);

}

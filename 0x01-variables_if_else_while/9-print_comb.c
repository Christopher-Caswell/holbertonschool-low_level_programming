#include <stdio.h>
#include <string.h>
/**
* main - Rev your functions
*
* Return: 0
*/

int main(void)
{

int a;

for (a = 0; a <= 9; a++)

{
putchar((a) + '0');

if (a == 9)
{
continue;

putchar(',');
}
putchar(' ');
}

return (0);
}

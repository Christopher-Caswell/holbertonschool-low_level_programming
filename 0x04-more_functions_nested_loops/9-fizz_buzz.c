B#include "holberton.h"
/**
* main - do the thing
*
* Return: , fin
*/
int main(void)
{
char x;
x = 0;

while (x < 100)
{
x++;
if (x % 3 == 0 && x % 5 == 0)
{
printf("fizzbuzz");
putchar(' ');
}
if (x % 3 == 0)
{
printf("fizz");
putchar(' ');
}
else if (x % 5 == 0)
{
printf("buzz");
putchar(' ');
}
else
{
printf("%d", x);
putchar(' ');
}
}
putchar('\n');
return (0);
}

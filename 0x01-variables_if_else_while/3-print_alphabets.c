#include <stdio.h>

/**
 * main - print lower then upper alphabet
 * Return: success
 */

int main(void)
{
char x;

for (x = 97; x <= 122; x++)
{
putchar(x);
}
for (x = 65; x <= 90; x++)
{
putchar(x);
}
putchar (10);
return (0);
}

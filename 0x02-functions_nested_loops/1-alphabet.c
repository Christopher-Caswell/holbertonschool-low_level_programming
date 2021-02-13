#include "holberton.h"

/**
* print_alphabet - ...yes
*
* Return: 0, function will end upon run
*
*/

void print_alphabet(void)
{

/*
* Write a function that prints the alphabet
* in lower case, followed by a line
*
* learned ascii is the called function
* when a number is used for a character
*/

char a;

for (a = 97; a <= 122; a++)

putchar(a);
putchar('\n');

return;

}

#include<stdio.h>

/**
* main- functions start
*
* Return: function end, reset to main
*/

int main(void)
{

int a1;
float a2;
double a3;
char a4;
long long a5;

printf("size of long long: %lu bytes\n", sizeof(a5));
printf("Size of int: %lu bytes\n", sizeof(a1));
printf("Size of float: %lu bytes\n", sizeof(a2));
printf("Size of double: %lu bytes\n", sizeof(a3));
printf("Size of char: %lu byte\n", sizeof(a4));

return (0);
}

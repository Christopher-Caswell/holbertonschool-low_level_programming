#include<stdio.h>

/**
* main- functions start
*
* Return: function end, reset to main
*/

int main(void)
{

int g1;
float g2;
char g4;
long long g5;
long g6;
 
printf("size of int: %lu bytes\n", sizeof(g1));
printf("size of float: %lu bytes\n", sizeof(g2));
printf("Size of char: %lu bytes\n", sizeof(g4));
printf("Size of long long: %lu bytes\n", sizeof(g5));
printf("Size of long: %lu byte\n", sizeof(g6));

return (0);
}

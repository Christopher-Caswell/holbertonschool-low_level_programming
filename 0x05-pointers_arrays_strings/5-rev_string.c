#include "holberton.h"

/**
 * rev_string - we are reversing a string to output
 * @s: the string location
 * Return: the reversed string, of course
 */

void rev_string(char *s)
{

char tmp;
int len = _strlen(s);
int i;
int j;

for (i = 0, j = (len - 1); i < j; j--, i++)
{

tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}

return;
}


/**
 * _strlen - return the length of the string
*@s: the length of the string
 *
* Return: the length(x)
 */

 int _strlen(char *s)
{

int x;
x = 0;

while (*(s + x) != '\0')
{

x++;
}

return (x);
}

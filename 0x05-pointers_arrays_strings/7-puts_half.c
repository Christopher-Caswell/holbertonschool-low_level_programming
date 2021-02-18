#include "holberton.h"

/**
 * puts_half - prints half the string
 * @str: the 1/2 length
 * Return: the second half
 */

void puts_half(char *str)
{ /* 1 */

int x, y;
x = _strlen(str);



/* Expectation */
if (x % 2 == 0)
{ /* 2 */

for (y = (x / 2); y <= x; y++)

_putchar(str[y]);
}

/* Alternative */
else if (x % 2 != 0)
{ /* 3 */

for (y = ((x + 1) / 2); y <= x; y++)

_putchar(str[y]);
}
_putchar('\n');
return;
}


#include "holberton.h"

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

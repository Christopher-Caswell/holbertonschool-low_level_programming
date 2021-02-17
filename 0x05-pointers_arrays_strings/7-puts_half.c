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
y < '\0';

/* Expectation */
if (x % 2 == 0)
{ /* 2 */

y = (x / 2);
putchar (y);
y++;
}

/* Alternative */
else if (x % 2 != 0)
{ /* 3 */

y = ((x = 1) / 2);
putchar(y);
y++;
}

return;
}

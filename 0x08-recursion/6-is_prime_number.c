#include "holberton.h"

/**
 * is_prime_number - asks itself of n
 * @n: are you prime?
 * Return: the answewre to the f[x]
 */

int is_prime_number(int n)
{

if (n < 2)
return (0);

else
return (rootroot(n, 2));
}

/**
 * rootroot - read to is_prime
 * @n: same as above
 * @x: the increment
 * Return: so many options. Seeking is_prime's value
 */

int rootroot(int n, int x)
{

if (n % x == 0)
return (0);

if (x > (n / 2))
return (1);

else
return (rootroot(n, x + 1));
/* return to the prototype and increment within*/
}

#include "holberton.h"

/**
 * binary_to_uint - does what it says
 * @b: the binary string
 * Return: a decimal from binary
 */

unsigned int binary_to_uint(const char *b)
{

unsigned int home;

if (!b)
return (0);

for (home = 0; *b; b++)
{

if (*b != 48 && *b != 49)
return (0);

if (*b == '1')
home = (home << 1) | 1;

else if (*b == '0')
home <<= 1;

else
break;

}

return (home);
}

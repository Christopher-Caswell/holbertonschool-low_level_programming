#include "holberton.h"

/**
 * cap_string - cap the first letter of every word
 * @django: string
 * Return: djangarang
 */

char *cap_string(char *django)
{
int bangarang;

bangarang = 0;

if (django[0] >= 97 && django[0] <= 122)
{

django[0] = (django[0] - 32);
}

for (; django[bangarang] != 00; bangarang++)
{

if ((django[bangarang] == ('\n')) || (django[bangarang] == (' ')) ||
(django[bangarang] == 9) ||
(django[bangarang] == 44) || (django[bangarang] == 59) ||
(django[bangarang] == 46) || (django[bangarang] == 33) ||
(django[bangarang] == 63) || (django[bangarang] == 34) ||
(django[bangarang] == 40) || (django[bangarang] == 41) ||
(django[bangarang] == 123) || (django[bangarang] == 125))
{

if (django[bangarang + 1] >= 97 && django[bangarang + 1] <= 122)
{

django[bangarang + 1] = django[bangarang + 1] - 32;


}
}
}
return (django);
}

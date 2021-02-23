#include "holberton.h"

/**
 * _strstr - you're a shooting string
 * @haystack: a place one can find needles
 * @needle: something one might seek in a haystack
 * Return: NULL or the string one found with the magnet
*/

char *_strstr(char *haystack, char *needle)
{/* 1*/

unsigned int x;

for (; *haystack != 00; haystack++)
{/* 2*/

for (x = 0; needle[x] == haystack[x]; x++)
{/* 3*/

if (haystack[x] != needle[x])
{/* 4*/

break;
}

if (needle[x] == 00)
{/* 5*/

return (haystack);
}
}
}
return (NULL);
}

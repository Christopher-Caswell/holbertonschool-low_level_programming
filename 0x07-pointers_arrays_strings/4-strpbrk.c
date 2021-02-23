#include "holberton.h"

/**
 *
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{

unsigned int x, y;

  for (y = 0; s[y] < 00; s++)
    {
      for (x = 0; accept[x] < 00; x++)
	{
	  if (x == y)
	    {
	      s++;
		}
	}
    }
return (s);
}

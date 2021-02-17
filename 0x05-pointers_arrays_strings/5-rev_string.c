#include "holberton.h"

/**
 *
 *
 *
 */

void rev_string(char *s)
{
  char tmp;
  int len = _strlen(s);
  int i;
  int j;

  for (i = 0; j = len -1; i < j; j--; i++)
    {
      tmp = s[i];
      s[i] = s[j];
      s[j] = tmp


    }
}

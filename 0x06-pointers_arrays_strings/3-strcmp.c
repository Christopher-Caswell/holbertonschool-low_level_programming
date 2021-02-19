#include "holberton.h"

/**
 * _strcmp - two very obnoxious strings
 * @s1: the first lad
 * @s2: the second
 * Return: the measure
 */

int _strcmp(char *s1, char *s2)
{

int wap, wop;

for (wap = 0; s1[wap] != 00; wap++)
{
if ((s1[wap]) == (s2[wap]))
{
wop = 0;
continue;
}
else if (s1[wap] != s2[wap])
{
wop = (s1[wap] - s2[wap]);
break;
}
}
return (wop);
}

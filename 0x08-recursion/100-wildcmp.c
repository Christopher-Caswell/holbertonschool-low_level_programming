#include "holberton.h"

/**
 * wildcmp - protomoto
 * @s1: the pass
 * @s2: the passed
 * Return: the comparison of s1 and s2
 */

int wildcmp(char *s1, char *s2)
{

/*return the results of the following functions*/

return (check1(0, 0, s1, s2));

}


/**
 * check1 - if strings match, increment
 * @x: the variable location in string 1
 * @y: the variable location in string 2
 * @s1: string
 * @s2: string
 * Return: the proper results for read on above function
 */

int check1(int x, int y, char *s1, char *s2)
{

/*if the strings match, increment, if string 2 is an asterisk, check2*/
if (s2[y] == '*')
return (check1(x, ++y, s1, s2));
/*if they dont match and check2 says anything other than yes, return to top*/
if (s1[x] != s2[y])
{

if (s1[x] == 00)
return (0);

else if (check2(--y, s2) == 1)
return (check1(++x, y, s1, s2));

else
return (0);
}
/*if they dont match and check2 says yes,*/
/*increment only the first array and repeat*/
/*don't forget to check null*/

if (s2[y] == 00)
{

if (s1[x] == 00)
return (1);

else
return (0);
}

return (check1(++x, y, s1, s2));
}


/**
 * check2 - declares a previous asterisk
 * @v: a variable used to count
 * @s2: second string
 * Return: the pass for function 2
 */
int check2(int v, char *s2)
{

/*is recent location an asterisk?*/
/*return 1 if yes.*/
/*return 0 if no*/
/*return 0 if previous now equals 0*/

if (s2[v] == '*')
return (1);

else if (v != '*')
return (0);

return (check2(--v, s2));

}

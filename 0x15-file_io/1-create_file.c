#include "holberton.h"

/**
 * create_file - make a new file
 * @filename: the new file, by name
 * @text_content: the filler
 * Return: A new file
 */
int create_file(const char *filename, char *text_content)
{

int x, y, z = 0;

if (!filename)
return (-1);

x = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

if (x == -1)
return (-1);

if (!text_content)
{

close(x);
return (1);
}

while (text_content[y])
{

y++;
}

z = write(x, text_content, y);
close(x);

if (z == -1)
{

return (-1);
}

return (1);
}

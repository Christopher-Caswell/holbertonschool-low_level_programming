#include "holberton.h"

/**
 * read_textfile - read a book
 * @filename: the name of the book
 * @letters: the pages of the book
 * Return: the book to the library. . . or not if the book is empty
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

char *buffer;
ssize_t reads = 0, writes, count;

if (!filename)
{

return (0);
}

buffer = malloc(sizeof(buffer) * letters);

if (!buffer)
{

return (0);
}

count = open(filename, O_RDONLY);

if (count == -1)
{

free(buffer);
return (0);
}

reads = read(count, buffer, letters);

writes = write(1, buffer, reads);

if (writes == -1)
{

reads = 0;
}

free(buffer);
close(count);
return (reads);
}

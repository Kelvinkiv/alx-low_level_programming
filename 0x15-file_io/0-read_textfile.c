#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: The text file
 * @letters: total number of letters to be read
 * Return: actual number of letters it could read and print
 * 0 (if the file cannot be opened or read)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t s;
	ssize_t a;
	ssize_t b;

	s = open(filename, O_RDONLY);
	if (s == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	b = read(s, c, letters);
	a = write(STDOUT_FILENO, c, b);

	free(c);
	close(s);
	return (a);
}

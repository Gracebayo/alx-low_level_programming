#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- File print to STDOUT.
 * @filename: filename to read
 * @letters: letters to read
 * Return: a- actual number of bytes read and printed 0 or NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *ft;
	ssize_t tf;
	ssize_t a;
	ssize_t r;

	tf = open(filename, O_RDONLY);
	if (tf == -1)
		return (0);
	ft = malloc(sizeof(char) * letters);
	r = read(tf, ft, letters);
	a = write(STDOUT_FILENO, ft, r);
	free(ft);
	close(tf);
	return (a);
}


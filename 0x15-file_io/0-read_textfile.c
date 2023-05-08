#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- This reads text file and print to STDOUT.
 * @filename: This is the name of the text file that will be read
 * @letters:Theese are number of letters that are to be read
 * Return: This is returns the actual number of bytes read and printed
 * and returns 0 when function fails or filename is NULL or error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t df;
	ssize_t m;
	ssize_t r;

	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(df, buf, letters);
	m = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(df);
	return (m);
}

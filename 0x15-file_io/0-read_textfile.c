#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- this is the Read text file to be printed to STDOUT.
 * @filename: this is the text file being read
 * @letters: this shows the number of letters to be read
 * Return: b- will be the real number of bytes that are read and printed
 *        0 is returned when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t df;
	ssize_t b;
	ssize_t s;

	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	s = read(df, buff, letters);
	b = write(STDOUT_FILENO, buff, s);

	free(buff);
	close(df);
	return (b);
}

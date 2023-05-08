#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: This is a pointer to the name of the file to be created.
 * @text_content: Also a pointer to a string to write text into the file.
 *
 * Return: The function will turn a 1 if successful and -1 if an error occurs
 * or function fails
 */
int create_file(const char *filename, char *text_content)
{
	int df, m, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	df = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(df, text_content, len);

	if (df == -1 || m == -1)
		return (-1);

	close(df);

	return (1);
}

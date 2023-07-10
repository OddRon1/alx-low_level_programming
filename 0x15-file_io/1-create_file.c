#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - this function creates a file.
 * @filename: This a pointer to the name of the file that is to be created.
 * @text_content: This points to a string that is used to write to the file.
 *
 * Return: If the function fails it will return -1.
 *         Otherwise it will return 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int df, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	df = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(df, text_content, len);

	if (df == -1 || b == -1)
		return (-1);

	close(df);

	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - This appends text to the end of a file.
 * @filename: This is the name to which to be appended to.
 * @text_content: This is the string to append to the file.
 *
 * Return: If function does not exist or lacks permission it returns -1
 * but if it is successful it will return 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int t, m, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	t = open(filename, O_WRONLY | O_APPEND);
	m = write(t, text_content, len);

	if (t == -1 || m == -1)
		return (-1);

	close(t);

	return (1);
}

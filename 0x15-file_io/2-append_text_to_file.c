#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - this function Appends text at the end of a file.
 * @filename: this a pointer funtion to the name of the file.
 * @text_content: This is the string to be added to the end of the file.
 *
 * Return: When the function fails or file is NULL it will return -1.
 *         When the file is nonexistant and the user lacks write permissions returns -1.
 *         Otherwise returns 1 on success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int v, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	v = open(filename, O_WRONLY | O_APPEND);
	b = write(v, text_content, len);

	if (v == -1 || b == -1)
		return (-1);

	close(v);

	return (1);
}

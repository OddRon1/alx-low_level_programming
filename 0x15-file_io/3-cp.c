#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - This assisigns 1024 bytes for a buffer.
 * @file: This is the name of the file buffer that will be storing chars.
 *
 * Return: Return a pointer to the new buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - This will closes file descriptors.
 * @fd: This is file descriptor that is to be closed.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - This then copies the contents of a file to another file.
 * @argc: This counts the number of arguments that are supplied to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: This function returns 0 on success.
 *
 * Description: When the argument count is wrong - exit code 97.
 *              When file_from does not exst or cannot be read - exit code 98.
 *              When file_to cannot be created or written to - exit code 99.
 *              When file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, i, m;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		m = write(to, buffer, i);
		if (to == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		i = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (i > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

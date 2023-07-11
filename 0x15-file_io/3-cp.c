#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - this function allocates 1024 bytes for a buffer.
 * @file: This is the name of the file the buffer is storing chars for.
 *
 * Return: This is A pointer to the newly-allocated buffer.
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
 * close_file - this Closes the file descriptors.
 * @fd: This is the file descriptor that is to be closed.
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
 * main - this function copies the contents of a file to another file.
 * @argc: This it the number of arguments supplied to the program.
 * @argv: This is an array of pointers to the arguments.
 *
 * Return: this returns 0 on success.
 *
 * Description: If the argument count is wrong - exit code will be 97.
 *              If the file_from doesnt exist or cannot be read - exit code 98.
 *              If the file_to cannot be created or written to - exit code 99.
 *              If the file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, f, b;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	f = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		b = write(to, buffer, f);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		f = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

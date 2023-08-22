#include <unistd.h>

/**
 * _putchar - this function writes the character c to stdout
 * @c: The character that is to be printed
 *
 * Return: This function on success will return 1.
 * But when there is an error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

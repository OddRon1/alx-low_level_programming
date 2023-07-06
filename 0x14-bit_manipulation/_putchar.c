#include "main.h"
#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: This is the character to be printed
 *
 * Return: On successful run will return a 1.
 * When there is an error, -1 will return, and errno sets appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

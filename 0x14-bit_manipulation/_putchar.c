#include "main.h"
#include <unistd.h>
/**
 * _putchar - This function writes the character c to stdout
 * @c: The is the character to print
 *
 * Return: The function returns 1 on success and -1 on error,
 * and sets eerno appropriately in case of an error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

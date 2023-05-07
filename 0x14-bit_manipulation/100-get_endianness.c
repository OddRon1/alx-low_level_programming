#include <stdio.h>
#include "main.h"

/**
 * get_endianness - This function checks endianness of the machine.
 * Return: This returns 0 if endian is big, 1 if endian little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

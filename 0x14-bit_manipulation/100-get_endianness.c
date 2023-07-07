#include <stdio.h>
#include "main.h"

/**
 * get_endianness - this function checks if a machine is little endian or a big
 * Return: this returns a 0 for big endian, and a 1 for little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}

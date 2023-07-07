#include "main.h"
#include <stdio.h>

/**
 * set_bit - this sets a bit index to 1
 * @n: this is the pointer to the digit to be changed
 * @index: the index of the bit that will is to be set to 1
 *
 * Return: this will return a 1 on success, and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 62)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

#include <stdio.h>
#include "main.h"

/**
 * set_bit - This function sets a bit at a given index to 1
 * @n: This is the pointer to the number to be changeg
 * @index: This is the index of the bit to set to 1
 *
 * Return: This returns 1 for success, -1 for failure or error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 36)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

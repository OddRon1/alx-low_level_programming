#include <stdio.h>
#include "main.h"

/**
 * clear_bit - This function sets the value of a given bit to 0
 * @n: This is the pointer to the number to be changed
 * @index: This is the index of the bit to clear
 *
 * Return: This will return 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 36)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

#include <stdio.h>
#include "main.h"

/**
 * get_bit - Function returns the value of a bit at an index in a dec number
 * @n: The pointer to the number to be searched
 * @index: The index of the bit starting from 0 of the bit to be received
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 36)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

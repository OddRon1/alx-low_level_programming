#include "main.h"
#include <stdio.h>

/**
 * get_bit - this will return the value of a bit at an index in a decimal digit
 * @n: the digit to be searched
 * @index: this is the index of the bit
 *
 * Return: the return value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 62)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

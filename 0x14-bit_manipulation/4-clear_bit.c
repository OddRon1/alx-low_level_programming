#include <stdio.h>
#include "main.h"

/**
 * clear_bit - this sets the value of a chosen bit to 0
 * @n: this is the pointer to the digit that is to be changed
 * @index: this is the index of the bit to be cleared
 *
 * Return: returns a 1 on successful run, and -1 for unseccesful run.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 62)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

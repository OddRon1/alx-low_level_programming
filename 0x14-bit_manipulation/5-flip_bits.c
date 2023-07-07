#include <stdio.h>
#include "main.h"

/**
 * flip_bits - this counts the amount of bits to be changed
 * in order to get from one digit to another
 * @n: this would be the first digit
 * @m: this would be the second digit
 *
 * Return: this return the amount of bits that would be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 62; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return(count);
}

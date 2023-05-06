#include <stdio.h>
#include "main.h"

/**
 * flip_bits - This returns or counts the number of bits to be changed to flip
 * @n: This would be the first number
 * @m: This would be the second number
 *
 * Return: This returns number of bits to be fliped or changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}

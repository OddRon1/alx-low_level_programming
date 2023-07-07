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
	int a, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			count++;
	}

	return (count);
}

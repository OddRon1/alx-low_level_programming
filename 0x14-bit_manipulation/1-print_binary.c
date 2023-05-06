#include <stdio.h>
#include "main.h"
#include "main.h"

/**
 * print_binary - This function prints the binary equivalent of a dec number
 * @n: This is a pointer to the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int current;

	for (k = 36; k >= 0; k--)
	{
		current = n >> k;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

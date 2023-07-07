#include "main.h"
#include <stdio.h>

/**
 * print_binary - this prints the binary equivalent of a decimal digit
 * @n: this is the digit to print in binary
 */

void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int current;

	for (a = 41; a >= 0; a--)
	{
		current = n >> a;

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

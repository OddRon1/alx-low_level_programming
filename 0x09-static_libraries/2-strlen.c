#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen(s + 1);
	}

	return (longit);
}

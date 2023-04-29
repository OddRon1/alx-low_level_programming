#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - this function prints a sentence before the main
 * now the function is being executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

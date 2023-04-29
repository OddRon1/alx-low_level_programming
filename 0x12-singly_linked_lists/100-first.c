#include <stdio.h>

void beat(void) __attribute__ ((constructor));

/**
 * beat - this function prints a sentence before the main
 * now the function is being executed
 * return: no return
 */

void beat (void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

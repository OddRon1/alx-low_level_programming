#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - this function prints all the elements of a linked list
 * @h: where h is the pointer to the head of listint_t to be printed
 *
 * Return: This is number of nodes returned in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

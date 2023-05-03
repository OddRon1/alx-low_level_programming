#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - this function returns the number of elements in listint_t.
 * @h:where *h is the pointer to the head node of the listint_t list
 *
 * Return: this will return the number of nodes/elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}

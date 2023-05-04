#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index -Function returns the node at a index in a linked list
 * @head: The pointer of first node in the linked list
 * @index: The index of the node to return
 *
 * Return: The pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *curr = head;

	while (curr && x < index)
	{
		curr = curr->next;
		x++;
	}
	return (curr ? curr : NULL);
}

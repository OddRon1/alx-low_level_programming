#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - This returns the node in a linked  listint_t list
* @head: The pointer of first node in the linked list
* @index: The index of the node to return
*
* Return: The pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; y++)
	{
		if (head == NULL)
		return (NULL);
	head = head->next;
	}
	return (head);
}

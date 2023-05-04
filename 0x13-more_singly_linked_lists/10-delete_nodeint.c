#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes a node in a list at an index
 * @head: This is the address to the initial node in the list
 * @index: This is index of the node to be deleted in the list
 *
 * Return:This returns 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *current = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		return (1);
	}

	while (x < index - 1)
	{
		if (!curr || !(curr->next))
			return (-1);
		curr = curr->next;
		x++;
	}


	current = curr->next;
	curr->next = current->next;
	free(current);

	return (1);
}

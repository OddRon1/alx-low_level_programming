#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - This function frees a linked listint_t list
 * where the head is set to NULL
 * @head: This is the pointer to the initial node listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}

	*head = NULL;
}

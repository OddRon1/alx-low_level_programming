#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - This function frees a linked listint_t list
 * @head: This is a pointer to the intial node in listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}

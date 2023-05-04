#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - This function reverses a linked listint_t list
 * @head: This is the pointer to the initial node in the list
 *
 * Return: Returns pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;
	return (*head);
}

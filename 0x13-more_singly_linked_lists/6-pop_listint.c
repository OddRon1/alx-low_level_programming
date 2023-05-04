#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint -This function deletes the head node of a linked listint_t list
 * @head: This is the pointer to the head of the listint_t list
 *
 * Return: the value inside the node that was deleted or returns 0
 * if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int nodes;

	if (head == NULL || *head == NULL)
		return (0);

	nodes = (*head)->n;
	curr = (*head)->next;
	free(*head);
	*head = curr;

	return (nodes);
}

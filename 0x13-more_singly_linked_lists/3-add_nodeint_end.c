#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - This function adds a node at the end of a listint_t list
 * @head: This is the pointer to the first element in the listint_t list
 * @n: The interger value to be inserted in the new element
 *
 * Return:This is the pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_node;
	listint_t *temp = *head;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
	{
		*head = added_node;
		return (added_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = added_node;

	return (added_node);
}

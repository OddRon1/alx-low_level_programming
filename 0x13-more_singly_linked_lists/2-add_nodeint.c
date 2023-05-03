#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @head: this is a pointer to the first node in the list
 * @n: This is the value to be inserted in that new node
 *
 * Return:this returns a pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = *head;
	*head = added_node;

	return (added_node);
}

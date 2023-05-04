#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new element in a list,
 * at a given position
 * @head: This is the pointer to the initial node in the list
 * @idx: This is the index where the new node is added
 * @n: The value to be insert in the new element
 *
 * Return:This returns pointer to the new element, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new_node;
	listint_t *curr = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (x = 0; curr && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		else
			curr = curr->next;
}

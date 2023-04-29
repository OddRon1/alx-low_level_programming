#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - will add a new node at the end of a linked list_t list
 * @head: this is the double pointer to the list_t list
 * @str: the string to be put in the new node
 *
 * Return: returns the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	temp_node = *head;
	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (*head);
}

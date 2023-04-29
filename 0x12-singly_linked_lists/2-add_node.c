#include <stdlib.h>
#include <string.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this adds a new node at the beginning of a linked list_t list
 * @head: this is the double pointer to the list_t list
 * @str: the new string to be added in the node
 *
 * Return: will return a pointer to the new head and will be NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

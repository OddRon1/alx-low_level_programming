#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - this function frees a linked list_t list
 * @head: this is the pointer to the head of the list.
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		head = temp_node;
		free(head->str);
		free(head);
	}
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - This function finds the loop in a linked listint_t list
 * @head: The pointer the linked list has to search for
 *
 * Return: Returns the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *work = head;
	listint_t *hard = head;

	if (!head)
		return (NULL);

	while (work && hard && hard->next)
	{
		hard = hard->next->next;
		work = work->next;
		if (hard == work)
		{
			work = head;
			while (work != hard)
			{
				work = work->next;
				hard = hard->next;
			}
			return (hard);
		}
	}

	return (NULL);
}

#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */
int check_cycle(listint_t *list)
{
	listint_t *william, *leo;

	if (list == NULL || list->next == NULL)
		return (0);

	william = list->next;
	leo = list->next->next;

	while (william && leo && leo->next)
	{
		if (william == leo)
			return (1);

		william = leo->next;
		leo = leo->next->next;
	}

	return (0);
}

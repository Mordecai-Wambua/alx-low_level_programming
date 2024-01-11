#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the note at index
 * @head: pointer ot pointer to head
 * @index: index of node to be deleted
 *
 * Return 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a;
	if (head == NULL)
		return (-1);
	a = *head;

	if (a == NULL)
		return (-1);

	while (index != 0)
	{
		a = a->next;
		index--;

		if (a == NULL)
			return (-1);
	}
	if (a->prev != NULL)
		a->prev->next = a->next;
	else
	{
		*head = a->next;
		if (a->next != NULL)
			a->next->prev = NULL;
		free(a);
	}
	return (1);
}

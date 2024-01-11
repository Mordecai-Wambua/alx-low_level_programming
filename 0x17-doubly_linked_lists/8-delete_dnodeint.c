#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the note at index
 * @head: pointer ot pointer to head
 * @index: index of node to be deleted
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a, *b;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	a = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(a);
		return (1);
	}
	for (i = 0; i < index && a != NULL; i++)
	{
		a = a->next;
	}

	if (a == NULL)
		return (-1);
	b = a->prev;
	b->next = a->next;
	if (a->next != NULL)
		a->next->prev = b;
	free(a);
	return (1);
}

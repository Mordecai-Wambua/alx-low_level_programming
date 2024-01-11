#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index - get a specific node
 * @head: pointer to head
 * @index: index of node
 *
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *a;
	unsigned int b = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	a = head;

	while (a != NULL)
	{
		if (b == index)
		{
			return (a);
		}
		a = a->next;
		b++;
	}
	return (NULL);
}

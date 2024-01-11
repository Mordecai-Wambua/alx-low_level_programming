#include "lists.h"

/**
 * dlistint_t *insert_dnodeint_at_index - inserts a new node at
 *  a given position
 *  @h: pointer to head
 *  @idx: specified position
 *  @n: data for new node
 *
 *  Return: address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a, *new;
	unsigned int b = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	a = *h;
	while (a != NULL && b < idx - 1)
	{
		a = a->next;
		b++;
	}
	if (a == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = a->next;
	if (a->next != NULL)
		a->next->prev = new;
	a->next = new;
	new->prev = a;
	return (new);
}

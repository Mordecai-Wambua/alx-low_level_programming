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
	unsigned int b;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	a = *h;
	b = 0;
	while (a != NULL)
	{
		if (b == idx - 1 && a->next != NULL)
		{
			new->next = a->next;
			a->next = new;
			return (new);
		}
		a = a->next;
		b++;
	}
	free(new);

	return (NULL);
}

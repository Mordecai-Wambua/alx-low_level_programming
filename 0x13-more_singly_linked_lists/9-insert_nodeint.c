#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at specified position
 * @head: pointer of pointer to head of linked list
 * @idx: index- specific position
 * @n: node integer
 *
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *new;
	unsigned int b;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	a = *head;
	b = 0;
	while (a != NULL)
	{
		if (b == idx - 1)
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

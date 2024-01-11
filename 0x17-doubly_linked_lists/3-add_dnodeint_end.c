#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - adds a new node at end of a linked list
 * @head: pointer to pointer to head
 * @n: data to be held
 * Return: address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *c;

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;

		c->next = new;
		new->prev = c;
		return (new);
	}
}


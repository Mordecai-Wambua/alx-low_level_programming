#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the linked list
 * @head: pointer to head of linked list
 * @n: node integer
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *c = *head;

	if (head == NULL || new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (c->next != NULL)
		{
			c = c->next;
		}
		c->next = new;
	}

	return (new);
}

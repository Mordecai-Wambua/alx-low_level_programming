#include "lists.h"

/**
 * dlistint_t *add_dnodeint - adds a new node at the beginning of linked list
 * @head: pointer of pointer of head
 * @n: data to be held in new node
 *
 * Return: address or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}

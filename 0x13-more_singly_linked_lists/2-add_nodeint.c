#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list
 * @head: pointer to head of linked list
 * @n: node integer
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


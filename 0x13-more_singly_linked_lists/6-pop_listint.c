#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: pointer of pointer to head of linked list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	a = *head;
	n = a->n;
	*head = (*head)->next;
	free(a);

	return (n);
}

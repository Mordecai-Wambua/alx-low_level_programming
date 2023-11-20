#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to head of linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		a = *head;
		*head = (*head)->next;
		free(a);
	}
}



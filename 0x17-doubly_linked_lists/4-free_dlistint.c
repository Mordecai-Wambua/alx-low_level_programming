#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}

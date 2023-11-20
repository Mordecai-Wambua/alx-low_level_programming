#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head of linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}

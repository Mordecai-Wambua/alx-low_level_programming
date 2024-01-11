#include "lists.h"
/**
 * int sum_dlistint - finds sum of all data in the linked list
 * @head: pointer to head
 *
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *a = head;
	dlistint_t *b;
	int sum = 0;

	while (a != NULL)
	{
		b = a->next;
		sum += a->n;
		a = b;
	}
	return (sum);
}

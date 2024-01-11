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
	int sum = 0;

	while (a != NULL)
	{
		sum += a->n;
		a = a->next;
	}
	return (sum);
}

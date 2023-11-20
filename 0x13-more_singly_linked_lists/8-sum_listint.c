#include "lists.h"

/**
 * sum_listint - sums data in a linked list
 * @head: pointer to head of linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *a = head;
	int sum = 0;

	while (a != NULL)
	{
		sum += a->n;
		a = a->next;
	}
	return (sum);
}

#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer to head of linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t a = 0;

	if (h == NULL)
	{
		return (0);
	}

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		a++;
	}
	return (a);
}

#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer to head of linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}

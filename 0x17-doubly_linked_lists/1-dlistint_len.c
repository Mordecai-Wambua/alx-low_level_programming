#include "lists.h"

/**
 * dlistint_len - find no. of elements in the linked list
 * @h: pointer to head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head of linked list
 * @index: index of the nth node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a;
	unsigned int b = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	a = head;

	while (a != NULL)
	{
		if (b == index)
		{
			return (a);
		}
		a = a->next;
		b++;
	}
	return (NULL);
}

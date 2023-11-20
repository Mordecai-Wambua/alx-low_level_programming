#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index in linked list
 * @head: pointer to a pointer to head of the linked list
 * @index: node index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *tmp;
	unsigned int b;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	a = *head;
	b = 0;

	while (a != NULL)
	{
		if (b == index - 1)
		{
			tmp = a->next;
			if (tmp == NULL)
			{
				return (-1);
			}
			a->next = tmp->next;
			free(tmp);
			return (1);
		}
		a = a->next;
		b++;
	}
	return (-1);
}

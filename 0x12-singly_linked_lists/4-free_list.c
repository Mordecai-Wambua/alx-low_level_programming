#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of a linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a->str);
		free(a);
	}
}

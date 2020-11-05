#include "lists.h"

/**
 * free_listint - frees the list
 * @head: head
 */

void free_listint(listint_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->n);
		free(head);
		head = tmp;
	}
}

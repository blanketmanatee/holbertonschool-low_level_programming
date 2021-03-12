#include "lists.h"

/**
 * free_listint2 - frees listint_t sets head to NULL
 * @head: first
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (head)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}

}

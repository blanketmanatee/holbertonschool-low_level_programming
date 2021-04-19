#include "lists.h"

/**
 * pop_listint - deletes head node of listint_t
 * @head: first node
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (value);
}

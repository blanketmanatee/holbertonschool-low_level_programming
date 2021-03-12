#include "lists.h"

/**
 * sum_listint - sum of data in listint_t
 * @head: pointer to first node
 * Return: 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
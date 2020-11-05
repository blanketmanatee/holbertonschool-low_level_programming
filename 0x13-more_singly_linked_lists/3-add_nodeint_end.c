#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: head
 * @n: int
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *cnt;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->next = NULL;
	tmp->n = n;

	if (*head)
	{
		cnt = *head;
		while (cnt->next != NULL)
			cnt = cnt->next;
		cnt->next = tmp;
	}
else
	*head = tmp;
	return (tmp);
}

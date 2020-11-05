#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: head
 * @n: int
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int cnt = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = strdup(n);
	while (n[cnt] != '\0')
		cnt++;
	tmp->n = cnt;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

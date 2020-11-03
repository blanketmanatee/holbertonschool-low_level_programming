#include "lists.h"

/**
 * print_listint - print all elements of listint_t
 * @h:
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{

	unsigned int cnt = 0;

	while (h != NULL)
	{
		printf("[%d]\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}

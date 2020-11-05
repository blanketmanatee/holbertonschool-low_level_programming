#include "lists.h"

/**
 * print_listint - print all elements of listint_t
 * @h: pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)

{

	int cnt = 0;

	while (h)
	{
		cnt++;
		printf("%d\n", h->n);
		h = h->next;
		printf("\n");
	}
	return (cnt);
}

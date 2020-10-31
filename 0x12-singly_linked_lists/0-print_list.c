#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: node
 * Return: nil if NULL otherwise number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}
	return (cnt);
}

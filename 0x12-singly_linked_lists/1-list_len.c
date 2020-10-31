#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int cnt = 0;

	while(h)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}

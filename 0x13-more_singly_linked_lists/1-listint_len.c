#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t
 * @h: pointer
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int cnt = 0;

	while (h)
	{
		h = h->n;
		cnt++;
	}
	return (cnt);
}

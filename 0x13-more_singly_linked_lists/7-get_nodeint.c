#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t
 * @head:
 * @index:
 * Return: NULL If node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL)
	{
		if (a == index)
			return (head);
		head = head->next;
		a++;
	}
	return (NULL);

}

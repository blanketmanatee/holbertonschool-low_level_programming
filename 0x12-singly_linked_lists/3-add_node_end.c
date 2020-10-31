#include <lists.h>

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: head of list
 * @str: needs to be duplicated
 * Return: address of new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int cnt = 0;
	list_t *end, *tmp;

	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);

	if (str)
	{
		end->str = strdup(str);
		while(str[cnt] != '\0')
			cnt++;
		end->len = cnt;
	}
	else
	{
		end->str = NULL;
		end->len = 0;
	}
	end->next = NULL;
	if (*head)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = end;
	}
	else
		*head = end;
	return (end);
}

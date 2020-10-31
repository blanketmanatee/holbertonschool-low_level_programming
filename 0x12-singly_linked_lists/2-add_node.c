#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head of list
 * @str: needs to be duplicated
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int cnt = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	while (str[cnt] != '\0')
		cnt++;
	tmp->len = cnt;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

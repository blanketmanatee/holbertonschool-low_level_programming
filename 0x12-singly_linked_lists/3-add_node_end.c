#include <lists.h>

/**
 * add_node_end - adds a new node at the end of list_t
 * @head: head of list
 * @str: needs to be duplicated
 * Return: address of new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

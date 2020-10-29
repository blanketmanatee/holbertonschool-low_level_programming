#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head of list
 * @str: needs to be duplicated
 * Return: address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{

#include "holberton.h"

/**
 * _strdup - call to pointer to copy another
 * @str: string pointer
 * Return: new string pointer
 */

char *_strdup(char *str)
{
	char *new;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	size += 1;

	new = malloc(size * sizeof(*str));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new[i] = str[i];
	}
	return (new);
}

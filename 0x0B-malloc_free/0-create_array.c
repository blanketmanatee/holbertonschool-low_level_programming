#include "holberton.h"

/**
 * create_array - create an array of chars
 * @size: malloc size
 * @c: char to initialize array
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(*str));
	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}

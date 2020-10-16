#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: unsigned int
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  i = 0, j = 0, count = 0;
	char *new;
/* treating NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		count = i + j;
	else
		count = i + n;

/* allocate memory for new string */
	new =  malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
/* concatenating strings into a new string */
	for (i = 0; s1[i]; i++)
		new[i] = s1[i];
	for (j = 0; i < count; j++)
	{
		new[i++] = s2[j];
		new[i] = '\0';
	}
	return (new);
}

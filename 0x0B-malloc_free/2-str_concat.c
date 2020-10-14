#include "holberton.h"

/**
 * str_concat - receive two str
 * @s1: first str
 * @s2: second str
 * Return: str
 */

char *str_concat(car *s1, char *s2)
{

	int i = 0, j = 0, l = 0;
	char *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	temp = malloc ((l + 1) * sizeof(char));
	if (temp == 0)
		return (NULL);

	for (i = 0; i < l - j; i++)
		temp[i] = s1[i];
	for (j = 0; i <= l; j++, i++)
		temp[i] = s2[j];
	temp[i + 1] = '\0';
	return (temp);
}

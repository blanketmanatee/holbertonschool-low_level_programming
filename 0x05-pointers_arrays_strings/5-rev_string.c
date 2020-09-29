#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: pointer
 */

void rev_string(char *s)
{
	int count;
	int temp;
	char *end = s;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	s--;

	count = count / 2;

	for (; count > 0; count--, end ++, s--)
	{
		temp = *end;
		*end = *s;
		*s = temp;
	}
}

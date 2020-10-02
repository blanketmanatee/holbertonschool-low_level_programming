#include "holberton.h"

/**
 * string_toupper - changes all lowercase char in a str to uppercase
 * Return: p
 */

char *string_toupper(char *p)
{
	int m;

	for (m = 0; p[m] != '\0'; m++)
	{
		if (p[m] > 96 && p[m] <= 123)
		{
			p[m] -= 32;
		}
	}
	return (p);
}

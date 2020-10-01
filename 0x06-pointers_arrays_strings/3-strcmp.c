#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	b = 0;
	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] - s2[a] != 0)
		{
			b = s1[a] - s2[a];
			break;
		}
	}
	if (b == 0 && s1[a] == '\0')
		b = s1[a] - s2[a];
	return (b);
}

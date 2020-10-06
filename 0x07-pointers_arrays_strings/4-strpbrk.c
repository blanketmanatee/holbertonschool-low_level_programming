#include "holberton.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s:
 * @accept:
 * Return:
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while(s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
				return (s + 2);
			b++;
		}
		a++;
	}
	return (0);
}

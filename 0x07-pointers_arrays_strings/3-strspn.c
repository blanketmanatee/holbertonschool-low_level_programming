#include "holberton.h"

/**
 * _strspn - gets len of prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (accept[b] == s[a])
				break;
		}
		if (!accept[b])
			break;
	}
	return (a);
}

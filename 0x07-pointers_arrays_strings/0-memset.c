#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @n: bytes being filled
 * @s: char
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}

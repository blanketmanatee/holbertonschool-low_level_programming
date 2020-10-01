#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: string to be copied
 * @n: int
 * Return: Pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}

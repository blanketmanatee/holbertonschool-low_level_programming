#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: string to be copied
 * @n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
		dest[a] = '\0';
	return (dest);
}

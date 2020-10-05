#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: bytes to be copied
 * @n: amount of bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

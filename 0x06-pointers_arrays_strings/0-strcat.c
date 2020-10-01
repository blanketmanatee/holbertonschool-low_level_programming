#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: string to be copied
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; src[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[a];
		a++;
	}
	dest[b] = '\0';
	return (dest);
}

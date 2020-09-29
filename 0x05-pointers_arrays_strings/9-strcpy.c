#include "holberton.h"

/**
 * _strcpy - copies string including null byte
 * @dest: destination
 * @src: string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src != '\0')
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}
	*(dest + i) = '\0';
	return (dest);
}

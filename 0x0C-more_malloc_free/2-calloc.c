#include "holberton.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: NULL, or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

/* if _calloc fails returns 0 */
	if (nmemb <= 0 || size <= 0)
		return (NULL);
/* number of elements * size equals ptr */
	ptr = malloc(nmemb * size);
/* if ptr is NULL memory is not allocated and returns existing ptr */
	if (ptr == NULL)
		return (ptr);

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

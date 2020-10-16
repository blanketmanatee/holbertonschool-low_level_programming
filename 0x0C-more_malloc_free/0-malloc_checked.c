#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int size
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
/* if malloc fails exit status 98 */
	if (ptr == NULL)
		exit(98);
/* if malloc is success return ptr as normal */
	else
		return (ptr);
}

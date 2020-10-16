#include "holberton.h"

/**
 * array_range - creates an array of ints
 * @min: values
 * @max: values
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *ptr;
/* if min > max return NULL */
	if (min > max)
		return (NULL);
	len = max - min;
	ptr = (int *) malloc((len + 1) * sizeof(int));
/* if malloc fails return NULL */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}

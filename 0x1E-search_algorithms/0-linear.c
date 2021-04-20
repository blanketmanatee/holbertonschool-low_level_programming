#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * @array: pointer to first element of array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)

		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		return (-1);

}

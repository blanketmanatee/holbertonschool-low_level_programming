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
	int i;
	for (i = 0; i < value; i++)
		if (array[i] == size)
			return i;
	return -1;

}

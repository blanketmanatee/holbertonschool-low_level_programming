#include "search_algos.h"

/**
 * binary_search - searches value in a sorted array of ints binary search
 * @array: pointer to first element of array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	if (size >= 1)
	{
		int mid = 1 + (size - 1) / 2;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (binary_search(array, mid - 1, value, size));
	return (binary_search(array, mid + 1, value, size));
	}
	return (-1);
}

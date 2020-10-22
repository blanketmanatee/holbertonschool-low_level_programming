#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array elements
 * @size: size of array
 * @cmp: pointer to the function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL && cmp != NULL)
/* checking if elements are valid and not NULL */
	{
		for (i = 0; i < size; i++)
/* iterator */
		{
			if (cmp(array[i]) != 0)
/* cmp function pointer accepting int ptr array of int i */
			{
				return (i);
/* if it is not NULL return the int */
			}
		}
	}
	return (-1);
/* otherwise return -1 */
}

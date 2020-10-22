#include "function_pointers.h"

/**
 * array_iterator - exectutes a function given as a parameter on each element
 * @array: pointer to array
 * @size: size of array
 * @action: point to the function needed to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
/* action is function pointer taking int as argument. */
/* array_iterator function returning void int pointer, size_t */

	size_t i;

	if (array && action)
/* if these pointers exist and are not NULL */
	{

		for (i = 0; i < size; i++)
/* i is the iterator here */
		{
			action(array[i]);
/* using the function pointer accepting the array pointer and i iterator */
		}
	}
}

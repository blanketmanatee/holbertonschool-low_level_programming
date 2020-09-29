#include "holberton.h"

/**
 * print_array - prints elements of an array
 * @a: pointer
 * @n: int
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b != 0)
			printf(", %d", *(a + b));
		else
			printf("%d", *(a + b));
	}
	printf('\n');
}

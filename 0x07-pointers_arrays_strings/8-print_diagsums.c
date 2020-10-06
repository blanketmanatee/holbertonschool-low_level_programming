#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a sq matrix
 * @a: pointer
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int z;
	int sum1 = 0;
	int sum2 = 0;

	for (z = 0; z < size; z++)
	{
		if (z)
			a += size;
		sum1 += *(a + z);
		sum2 += *(a + (size - z - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}

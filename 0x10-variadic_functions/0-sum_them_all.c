#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: number of ints
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

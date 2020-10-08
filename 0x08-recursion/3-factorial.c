#include "holberton.h"

/**
 * factorial - returns factorial of a given number
 * @n: int variable
 * Return: -1 or 0
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
else
	return (n * factorial(n - 1));
}

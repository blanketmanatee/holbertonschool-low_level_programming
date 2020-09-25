#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: tests if digit
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

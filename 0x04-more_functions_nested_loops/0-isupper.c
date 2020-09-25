#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: tests if uppercase
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
#include <stdio.h>

/**
 * _abs - computs absolute value of int
 * @a: int
 * Return: a
 */

int _abs(int a)
{

	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (0 - a);
	}
}

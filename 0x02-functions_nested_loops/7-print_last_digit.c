#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit of a number
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}

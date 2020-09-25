#include "holberton.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: number of times the character _ should be printed
 * Return: void
 */

void print_line(int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}

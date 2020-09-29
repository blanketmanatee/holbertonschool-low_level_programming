#include "holberton.h"

/**
 * print_rev - prints a string in rev followed by a new line
 * @s: pointer
 */

void print_rev(char *s)
{
	int count;

	count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	s--;
	while (count)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');
}

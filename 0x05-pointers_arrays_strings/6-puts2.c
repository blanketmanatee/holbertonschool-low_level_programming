#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
	int count;

	count = 0;

	while (*str)
	{
		if (count % 2 == 0)
			_putchar(*str);
		count++;
		str++;
	}
	_putchar('\n');
}

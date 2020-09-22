#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints alphabet 10x's followed by a newline
 */

void print_alphabet_x10(void)
{

	int counter = 0;
	char letter;

	while (counter++ <= 9)
	{

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

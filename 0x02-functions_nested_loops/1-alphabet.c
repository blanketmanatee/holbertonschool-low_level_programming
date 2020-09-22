#include "holberton.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lowercase followed by new line
 * Return: 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

#include <stdio.h>

/**
 * main - the alphabet in lowercase then uppercase
 * Return: 0
 */

int main(void)
{
	char letter = 'a';
	char letterU = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letterU <= 'Z')
	{
		putchar(letterU);
		letterU++;
	}
	putchar('\n');
	return (0);
}
